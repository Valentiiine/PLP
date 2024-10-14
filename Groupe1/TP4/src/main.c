#include <stdio.h>
#include "postfix.h"

int main() {
    char infix[100];
    char postfix[100];
    
    printf("Entrez une expression mathématique (infixée) : ");
    fgets(infix, sizeof(infix), stdin);

    // Convertir l'expression infixée en postfixée
    infix_to_postfix(infix, postfix);

    // Afficher l'expression postfixée
    printf("Expression postfixée : %s\n", postfix);

    double result = eval_postfix(postfix);
    
    printf("Résultat : %.2f\n", result);

    return 0;
}