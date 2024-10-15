#ifndef PARSEUR_H
#define PARSEUR_H

// Structure pour représenter une expression mathématique
typedef struct {
    char operator;
    int operand1;
    int operand2;
} Expression;

// Fonction pour analyser une expression et remplir la structure Expression
int parse_expression(const char *expression, Expression *result);

#endif
