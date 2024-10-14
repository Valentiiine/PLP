#include <stdio.h>
#include "lexer.h"
#include "parseur.h"
#include "evaluation.h"

int main() {
    char expression[100];

    printf("Entrez une expression mathématique : ");
    fgets(expression, sizeof(expression), stdin);

    init_lexer(expression);
    Expression expr = parse_expression();
    double result = eval_expression(expr);

    printf("Résultat : %f\n", result);

    return 0;
}
