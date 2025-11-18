#include "ast.h"

int asi_triggered = 0;
int last_line = 1;

ASTNode* create_node(NodeType type, const char *value) {
    ASTNode *node = (ASTNode*)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    node->type = type;
    node->value = value ? strdup(value) : NULL;
    node->left = NULL;
    node->right = NULL;
    node->extra = NULL;
    node->next = NULL;
    node->line = 0;
    node->col = 0;
    return node;
}

ASTNode* create_binary_node(NodeType type, ASTNode *left, ASTNode *right) {
    ASTNode *node = create_node(type, NULL);
    node->left = left;
    node->right = right;
    return node;
}

ASTNode* create_unary_node(NodeType type, ASTNode *child) {
    ASTNode *node = create_node(type, NULL);
    node->left = child;
    return node;
}

void free_ast(ASTNode *node) {
    if (!node) return;
    
    free_ast(node->left);
    free_ast(node->right);
    free_ast(node->extra);
    free_ast(node->next);
    
    if (node->value) {
        free(node->value);
    }
    free(node);
}

static const char* node_type_to_string(NodeType type) {
    switch (type) {
        case NODE_PROGRAM: return "Program";
        case NODE_FUNCTION_DECL: return "FunctionDeclaration";
        case NODE_VAR_DECL: return "VariableDeclaration";
        case NODE_IDENTIFIER: return "Identifier";
        case NODE_LITERAL: return "Literal";
        case NODE_BINARY_EXPR: return "BinaryExpression";
        case NODE_UNARY_EXPR: return "UnaryExpression";
        case NODE_ASSIGNMENT: return "AssignmentExpression";
        case NODE_CALL_EXPR: return "CallExpression";
        case NODE_MEMBER_EXPR: return "MemberExpression";
        case NODE_IF_STMT: return "IfStatement";
        case NODE_WHILE_STMT: return "WhileStatement";
        case NODE_FOR_STMT: return "ForStatement";
        case NODE_RETURN_STMT: return "ReturnStatement";
        case NODE_BLOCK_STMT: return "BlockStatement";
        case NODE_EXPR_STMT: return "ExpressionStatement";
        case NODE_EMPTY_STMT: return "EmptyStatement";
        case NODE_ARRAY_LITERAL: return "ArrayLiteral";
        case NODE_OBJECT_LITERAL: return "ObjectLiteral";
        case NODE_PROPERTY: return "Property";
        case NODE_NEW_EXPR: return "NewExpression";
        case NODE_THIS_EXPR: return "ThisExpression";
        case NODE_CONDITIONAL_EXPR: return "ConditionalExpression";
        case NODE_SEQUENCE_EXPR: return "SequenceExpression";
        default: return "Unknown";
    }
}

void print_ast(ASTNode *node, int depth) {
    if (!node) return;
    
    for (int i = 0; i < depth; i++) {
        printf("  ");
    }
    
    printf("%s", node_type_to_string(node->type));
    if (node->value) {
        printf(": %s", node->value);
    }
    printf("\n");
    
    print_ast(node->left, depth + 1);
    print_ast(node->right, depth + 1);
    print_ast(node->extra, depth + 1);
    print_ast(node->next, depth);
}