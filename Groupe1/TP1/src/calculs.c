#include <stdio.h>
#include <stdlib.h>  // Inclusion de la bibliothèque standard pour les fonctions utilitaires (pas strictement nécessaire ici).

// Fonction qui effectue une opération selon l'opérateur donné
void operateurs(int num1, int num2, char op) {

    // Opérateur addition (+)
    if (op == '+') {
        int nb = num1 + num2;  // Addition des deux nombres
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }
    // Opérateur soustraction (-)
    else if (op == '-') {
        int nb = num1 - num2;  // Soustraction des deux nombres
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }
    // Opérateur multiplication (*)
    else if (op == '*') {
        int nb = num1 * num2;  // Multiplication des deux nombres
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }
    // Opérateur division (/)
    else if (op == '/') {
        // Vérification pour éviter la division par zéro
        if (num2 != 0) {
            int nb = num1 / num2;  // Division des deux nombres
            printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
        } else {
            printf("Attention à la division par 0\n");  // Message d'avertissement pour division par zéro
        }
    }
    // Opérateur modulo (%)
    else if (op == '%') {
        int nb = num1 % num2;  // Calcul du reste de la division entière
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }

    // Opérateurs bitwise (opérations au niveau des bits)

    // Opérateur AND bitwise (&)
    else if (op == '&') {
        int nb = num1 & num2;  // Opération ET bit à bit
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }
    // Opérateur OR bitwise (|)
    else if (op == '|') {
        int nb = num1 | num2;  // Opération OU bit à bit
        printf("L'opération avec pour premier nombre: %d et second nombre: %d ayant pour opérateur %c est égal à %d\n", num1, num2, op, nb);
    }
    // Opérateur NOT bitwise (~)
    else if (op == '~') {
        int nb = ~num1;  // Opération NON bit à bit (complément à un) sur num1
        printf("L'opération avec pour premier nombre: %d ayant pour opérateur %c est égal à %d\n", num1, op, nb);
    }
    // Si l'opérateur n'est pas reconnu
    else {
        printf("Veuillez saisir un opérateur parmi : +, -, *, /, %%, &, |, ~\n");  // Message d'erreur pour un opérateur non valide
    }
}

int main() {
    int num1, num2;  // Déclaration de deux entiers pour les nombres
    char op;  // Déclaration du caractère qui représente l'opérateur

    // Demande à l'utilisateur de saisir le premier nombre
    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);

    // Demande à l'utilisateur de saisir le second nombre
    printf("Entrez le second nombre: ");
    scanf("%d", &num2);

    // Demande à l'utilisateur de saisir l'opérateur (arithmétique ou bitwise)
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~): ");
    scanf(" %c", &op);  // L'espace avant %c permet d'ignorer les caractères de retour à la ligne restants dans le buffer

    // Appel de la fonction 'operateurs' avec les nombres et l'opérateur fournis
    operateurs(num1, num2, op);

    return 0;  // Fin du programme
}
