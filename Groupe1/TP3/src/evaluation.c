#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "evaluation.h"
#include "parseur.h"

double eval_expression(Expression expr){
    double result = 0;
    
    // Addition
    if (expr.operator == '+') {
        result = expr.operand1 + expr.operand2;
        return result;
    }
    
    // Soustraction
    if (expr.operator == '-') {
        result = expr.operand1 - expr.operand2;
        return result;
    }

    // Multiplication
    if (expr.operator == '*') {
        result = expr.operand1 * expr.operand2;
        return result;
    }

    // Division
    if (expr.operator == '/') {
        if (expr.operand2 == 0) {
            printf("Erreur : Division par zéro\n");
            return 0;  // Erreur, retourne 0 ou une autre valeur pour indiquer l'échec
        } else {
            result = (double)expr.operand1 / expr.operand2;
            return result;
        }
    }

    // Opérateur inconnu
    printf("Erreur : opérateur inconnu '%c'\n", expr.operator);
    return 0;  // Erreur, retourne 0 ou une autre valeur pour indiquer l'échec
}

/*int main() {
    char expression[100];
    Expression result;
    // Lecture de l'expression mathématique de l'utilisateur
    printf("Entrez une expression (ex : 12 + 34) : ");
    fgets(expression, sizeof(expression), stdin);

    // Supprimer le saut de ligne final
    expression[strcspn(expression, "\n")] = 0;

    if (parse_expression(expression, &result)) {
        // Si la syntaxe est correcte, afficher la représentation interne
        printf("Opération : %c\n", result.operator);
        printf("Opérande 1 : %d\n", result.operand1);
        printf("Opérande 2 : %d\n", result.operand2);

        // Évaluer l'expression et afficher le résultat
        double eval_result = eval_expression(result);
        printf("Le résultat est : %.2f\n", eval_result);
    } else {
        // Afficher un message d'erreur si la syntaxe est incorrecte
        printf("Erreur lors du traitement de l'expression.\n");
    }
    /*double eval_result = eval_expression(expression);
    printf("Le résultat est : %.2f\n", eval_result);*/
    /* else {
        // Afficher un message d'erreur si la syntaxe est incorrecte
        printf("Erreur lors du traitement de l'expression.\n");
    }

    return 0;
}*/
