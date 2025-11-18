#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// AST Node Types
typedef enum {
    NODE_PROGRAM,
    NODE_FUNCTION_DECL,
    NODE_VAR_DECL,
    NODE_CONST_DECL, // 新增
    NODE_LET_DECL,   // 新增
    NODE_IDENTIFIER,
    NODE_LITERAL,
    NODE_BINARY_EXPR,
    NODE_UNARY_EXPR,
    NODE_ASSIGNMENT,
    NODE_CALL_EXPR,
    NODE_MEMBER_EXPR,
    NODE_IF_STMT,
    NODE_WHILE_STMT,
    NODE_FOR_STMT,
    NODE_RETURN_STMT,
    NODE_BLOCK_STMT,
    NODE_EXPR_STMT,
    NODE_EMPTY_STMT,
    NODE_ARRAY_LITERAL,
    NODE_OBJECT_LITERAL,
    NODE_PROPERTY,
    NODE_NEW_EXPR,
    NODE_THIS_EXPR,
    NODE_CONDITIONAL_EXPR,
    NODE_SEQUENCE_EXPR,
    NODE_ARROW_FUNCTION // 新增
} NodeType;

// AST Node Structure
typedef struct ASTNode {
    NodeType type;
    char *value;
    struct ASTNode *left;
    struct ASTNode *right;
    struct ASTNode *extra;
    struct ASTNode *next;
    int line;
    int col;
} ASTNode;

ASTNode* create_node(NodeType type, const char *value);
ASTNode* create_binary_node(NodeType type, ASTNode *left, ASTNode *right);
ASTNode* create_unary_node(NodeType type, ASTNode *child);
void free_ast(ASTNode *node);
void print_ast(ASTNode *node, int depth);

extern int asi_triggered;

#endif // AST_H