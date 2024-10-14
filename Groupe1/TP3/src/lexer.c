#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "lexer.h"

const char *input;
size_t current_pos = 0;

void init_lexer(const char *expression) {
    input = expression;
    current_pos = 0;
}

Token get_next_token() {
    Token token;
    
    // Ignorer les espaces et les retours à la ligne
    while (input[current_pos] == ' ' || input[current_pos] == '\n') {
        current_pos++;
    }

    // Fin de l'expression
    if (input[current_pos] == '\0') {
        token.type = TOKEN_END;
        return token;
    }

    // Nombres (entiers ou réels)
    if (isdigit(input[current_pos]) || input[current_pos] == '.') {
        char *end_ptr;
        token.type = TOKEN_NUMBER;
        token.value = strtod(&input[current_pos], &end_ptr);
        current_pos += (end_ptr - &input[current_pos]);
        return token;
    }

    // Opérateurs
    switch (input[current_pos]) {
        case '+':
            token.type = TOKEN_PLUS;
            current_pos++;
            break;
        case '-':
            token.type = TOKEN_MINUS;
            current_pos++;
            break;
        case '*':
            token.type = TOKEN_MULTIPLY;
            current_pos++;
            break;
        case '/':
            token.type = TOKEN_DIVIDE;
            current_pos++;
            break;
        default:
            token.type = TOKEN_INVALID;
            current_pos++;
            break;
    }

    return token;
}
