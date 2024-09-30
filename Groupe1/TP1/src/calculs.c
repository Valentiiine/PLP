#include <stdio.h>
#include <stdlib.h>

void operateurs(int num1, int num2, char op) {

    // Opérateurs arithmétiques
    if (op == '+') {
        int nb = num1 + num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 
    else if (op == '-') {
        int nb = num1 - num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 
    else if (op == '*') {
        int nb = num1 * num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            int nb = num1 / num2;
            printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
        } else {
            printf("Attention à la division par 0\n");
        }
    } 
    else if (op == '%') {
        int nb = num1 % num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 

    // Opérateurs bitwise
    else if (op == '&') {
        int nb = num1 & num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 
    else if (op == '|') {
        int nb = num1 | num2;
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    } 
    else if (op == '~') {
        int nb = ~num1;
        printf("L'opération avec pour premier nombre: %d ayant pour opérateur %c est égal à %d\n", num1, op, nb);
    } 
    else {
        printf("Veuillez saisir un opérateur parmi : +, -, *, /, %%, &, |, ~\n");
    }
}

int main() {
    int num1, num2;
    char op;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le second nombre: ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~): ");
    scanf(" %c", &op);  // L'espace avant %c permet d'ignorer les retours à la ligne

    operateurs(num1, num2, op);

    return 0;
}
