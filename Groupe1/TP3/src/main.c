#include <stdio.h>
#include <string.h>
#include "evaluation.h"
#include "parseur.h"

int main() {
    char expression[100];
    Expression result;

    // Demander une expression mathématique à l'utilisateur
    printf("Entrez une expression (ex : 12 + 34) : ");
    fgets(expression, sizeof(expression), stdin);

    // Supprimer le saut de ligne final si présent
    expression[strcspn(expression, "\n")] = 0;

    // Appeler la fonction de parsing
    if (parse_expression(expression, &result)) {
        // Si la syntaxe est correcte, afficher la représentation interne
        printf("Opération : %c\n", result.operator);
        printf("Opérande 1 : %d\n", result.operand1);
        printf("Opérande 2 : %d\n", result.operand2);

        // Appeler la fonction d'évaluation
        double eval_result = eval_expression(result);
        printf("Le résultat est : %.2f\n", eval_result);
    } else {
        printf("Erreur lors du traitement de l'expression.\n");
    }

    return 0;
}
