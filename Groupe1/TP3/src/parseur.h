#ifndef PARSEUR_H
#define PARSEUR_H

typedef struct {
    char operator;
    double operand1;
    double operand2;
} Expression;

// Fonction pour analyser une liste de jetons et créer une expression
Expression parse_expression();

#endif
