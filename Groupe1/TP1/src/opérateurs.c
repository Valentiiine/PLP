#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {  // Début de la fonction principale
    int a = 16;  // Déclaration et initialisation de la variable 'a' avec la valeur 16
    int b = 3;   // Déclaration et initialisation de la variable 'b' avec la valeur 3

    // Addition
    printf("Addition (a+b) = %d\n", a + b);  // Affiche la somme de 'a' et 'b'

    // Soustraction
    printf("Soustraction (a-b) = %d\n", a - b);  // Affiche la différence entre 'a' et 'b'

    // Multiplication
    printf("Multiplication (axb) = %d\n", a * b);  // Affiche le produit de 'a' et 'b'

    // Division
    printf("Division (a/b) = %.2f\n", (float)a / b);  // Affiche le quotient de 'a' divisé par 'b' en format flottant avec deux décimales
    // La conversion de 'a' en float permet d'obtenir un résultat décimal au lieu d'une division entière

    // Division euclidienne
    printf("Division euclidienne (a/b) = %d\n", a % b);  // Affiche le reste de la division de 'a' par 'b' (modulo)

    // Egalité
    printf("Egalité (a=b) = %s\n", (a == b) ? "True" : "False");  // Vérifie si 'a' est égal à 'b' et affiche "True" ou "False"

    // Supériorité
    printf("a supérieur à b (a>b) = %s\n", (a > b) ? "True" : "False");  // Vérifie si 'a' est supérieur à 'b' et affiche "True" ou "False"

    return 0;  // Indique que le programme s'est terminé avec succès
}
