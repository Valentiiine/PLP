#include <stdio.h>

void afficher_binaire(int num) {
    // Si le nombre est négatif, on le convertit en positif pour l'affichage
    int number = (int)num; // Utilisation d'un unsigned pour éviter les problèmes avec les nombres négatifs
    char binaire[33]; // 32 bits + 1 pour le caractère nul
    int index = 0;

    // Remplir le tableau de bits en utilisant la méthode de division par 2
    for (int i = 0; number > 0; i++) {
        binaire[i] = (number % 2) + '0'; // Stocke le bit (0 ou 1) comme caractère
        number /= 2;
        index++;
    }


    // Affichage en ordre inverse
    printf("Représentation binaire de %d : ", number);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binaire[i]);
    }
    printf("\n");
}

int main() {
    int nombre;

    // Saisie d'un nombre entier par l'utilisateur
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Appel de la fonction pour afficher la représentation binaire
    afficher_binaire(nombre);

    return 0;
}
