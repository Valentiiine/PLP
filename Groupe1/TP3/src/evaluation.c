#include <stdio.h>
#include <stdlib.h>
#include "evaluation.h"

double eval_expression(Expression expr) {
    double result = 0;

    switch (expr.operator) {
        case '+':
            result = expr.operand1 + expr.operand2;
            break;
        case '-':
            result = expr.operand1 - expr.operand2;
            break;
        case '*':
            result = expr.operand1 * expr.operand2;
            break;
        case '/':
            if (expr.operand2 == 0) {
                fprintf(stderr, "Erreur : division par zéro.\n");
                exit(EXIT_FAILURE);
            }
            result = expr.operand1 / expr.operand2;
            break;
        default:
            fprintf(stderr, "Erreur : opérateur invalide.\n");
            exit(EXIT_FAILURE);
    }

    return result;
}
