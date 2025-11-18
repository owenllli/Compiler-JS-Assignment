#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int parse_javascript(const char *input);
extern ASTNode* get_ast_root();
extern int yylineno;
extern int asi_triggered;

char* read_file(const char *filename) {
    FILE *file = fopen(filename, "rb");  // 改为二进制模式
    if (!file) {
        fprintf(stderr, "Error: Cannot open file %s\n", filename);
        return NULL;
    }
    
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    
    // 分配额外空间用于结尾的两个 null 字节
    char *buffer = (char*)malloc(size + 2);
    if (!buffer) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        fclose(file);
        return NULL;
    }
    
    size_t read_size = fread(buffer, 1, size, file);
    buffer[read_size] = '\0';      // 第一个 null
    buffer[read_size + 1] = '\0';  // 第二个 null（用于 re2c sentinel）
    
    fclose(file);
    return buffer;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <javascript-file> [-v]\n", argv[0]);
        fprintf(stderr, "  -v: verbose mode (print AST)\n");
        return 1;
    }
    
    int verbose = 0;
    if (argc >= 3 && strcmp(argv[2], "-v") == 0) {
        verbose = 1;
    }
    
    char *input = read_file(argv[1]);
    if (!input) {
        return 1;
    }
    
    printf("Parsing %s...\n", argv[1]);
    
    int result = parse_javascript(input);
    
    if (result == 0) {
        printf("✓ Syntax is valid\n");
        
        if (asi_triggered) {
            printf("  ASI (Automatic Semicolon Insertion) was triggered\n");
        }
        
        if (verbose) {
            printf("\nAST Structure:\n");
            printf("==============\n");
            ASTNode *root = get_ast_root();
            print_ast(root, 0);
            free_ast(root);
        }
    } else {
        printf("✗ Syntax error detected\n");
    }
    
    free(input);
    return result;
}