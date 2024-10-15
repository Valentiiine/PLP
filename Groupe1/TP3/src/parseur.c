#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "lexer.h"

// Structure pour représenter une expression mathématique
typedef struct {
    char operator;  // L'opérateur: '+', '-', '*', '/'
    int operand1;   // Premier opérande
    int operand2;   // Deuxième opérande
} Expression;

// Fonction pour valider l'opérateur
int is_valid_operator(char operator) {
    return (operator == '+' || operator == '-' || operator == '*' || operator == '/');
}

// Fonction pour analyser une expression et remplir la structure Expression
int parse_expression(const char *expression, Expression *result) {
    int num1 = 0, num2 = 0;
    char operator = '\0';

    // Appel à la fonction du lexer pour extraire les nombres et l'opérateur
    extract_numbers_and_operator(expression, &num1, &num2, &operator);

    // Vérification que l'opérateur est valide
    if (!is_valid_operator(operator)) {
        printf("Erreur : opérateur non valide. Utilisez '+', '-', '*', ou '/'.\n");
        return 0;  // Erreur
    }

    // Stocker les valeurs dans la structure de données interne
    result->operand1 = num1;
    result->operand2 = num2;
    result->operator = operator;

    return 1;  // Succès
}

/*// Fonction principale pour tester le parseur
int main() {
    char expression[100];
    Expression result;

    // Lecture de l'expression mathématique de l'utilisateur
    printf("Entrez une expression (ex : 12 + 34) : ");
    fgets(expression, sizeof(expression), stdin);

    // Supprimer le saut de ligne final
    expression[strcspn(expression, "\n")] = 0;

    // Appeler la fonction pour parser l'expression
    if (parse_expression(expression, &result)) {
        // Si la syntaxe est correcte, afficher la représentation interne
        printf("Opération : %c\n", result.operator);
        printf("Opérande 1 : %d\n", result.operand1);
        printf("Opérande 2 : %d\n", result.operand2);
    } else {
        // Afficher un message d'erreur si la syntaxe est incorrecte
        printf("Erreur lors du traitement de l'expression.\n");
    }

    return 0;
}*/
