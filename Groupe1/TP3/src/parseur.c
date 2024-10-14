#include <stdio.h>
#include <stdlib.h>
#include "parseur.h"
#include "lexer.h"

Expression parse_expression() {
    Expression expr;
    
    Token token = get_next_token();
    if (token.type != TOKEN_NUMBER) {
        fprintf(stderr, "Erreur : un nombre était attendu au début de l'expression.\n");
        exit(EXIT_FAILURE);
    }
    expr.operand1 = token.value;

    token = get_next_token();
    if (token.type == TOKEN_PLUS || token.type == TOKEN_MINUS ||
        token.type == TOKEN_MULTIPLY || token.type == TOKEN_DIVIDE) {
        expr.operator = (token.type == TOKEN_PLUS) ? '+' :
                        (token.type == TOKEN_MINUS) ? '-' :
                        (token.type == TOKEN_MULTIPLY) ? '*' : '/';
    } else {
        fprintf(stderr, "Erreur : un opérateur était attendu.\n");
        exit(EXIT_FAILURE);
    }

    token = get_next_token();
    if (token.type != TOKEN_NUMBER) {
        fprintf(stderr, "Erreur : un nombre était attendu après l'opérateur.\n");
        exit(EXIT_FAILURE);
    }
    expr.operand2 = token.value;

    token = get_next_token();
    if (token.type != TOKEN_END) {
        fprintf(stderr, "Erreur : fin d'expression attendue.\n");
        exit(EXIT_FAILURE);
    }

    return expr;
}
