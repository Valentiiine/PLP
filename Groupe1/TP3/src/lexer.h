#ifndef LEXER_H
#define LEXER_H

typedef enum {
    TOKEN_NUMBER,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULTIPLY,
    TOKEN_DIVIDE,
    TOKEN_INVALID,
    TOKEN_END
} TokenType;

typedef struct {
    TokenType type;
    double value;  // Utilisé seulement si le type est TOKEN_NUMBER
} Token;

// Fonction pour initialiser le tokenizer avec une chaîne
void init_lexer(const char *expression);

// Fonction pour obtenir le prochain jeton (token)
Token get_next_token();

#endif
