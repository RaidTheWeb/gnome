#ifndef GNOME_SCANNER_H
#define GNOME_SCANNER_H

typedef enum {
    // Single char
    TOKEN_LPAREN, TOKEN_RPAREN,
    TOKEN_LBRACE, TOKEN_RBRACE,
    TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
    TOKEN_SEMI, TOKEN_SLASH, TOKEN_STAR,

    // One/Two char
    TOKEN_BANG, TOKEN_BANGEQ,
    TOKEN_EQ, TOKEN_EQEQ,
    TOKEN_GREATER, TOKEN_GREATEREQ,
    TOKEN_LESS, TOKEN_LESSEQ,
    
    // Literal tokens
    TOKEN_ID, TOKEN_STR, TOKEN_NUMBER,

    // Keywords
    TOKEN_AND, TOKEN_CLASS, TOKEN_ELSE, TOKEN_FALSE,
    TOKEN_FOR, TOKEN_FUNC, TOKEN_IF, TOKEN_NIL, TOKEN_OR,
    TOKEN_PRINT, TOKEN_RETURN, TOKEN_SUPER, TOKEN_THIS,
    TOKEN_TRUE, TOKEN_VAR, TOKEN_WHILE,

    TOKEN_ERROR, TOKEN_EOF
} TokenType;

typedef struct {
    TokenType type;
    const char* start;
    int length;
    int line;
} Token;

void initScanner(const char* source);
Token scanToken();

#endif