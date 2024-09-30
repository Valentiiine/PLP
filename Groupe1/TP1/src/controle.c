#include <stdio.h>

// Fonction qui ajoute dans une liste les chiffres divisibles par 4 mais pas par 6
void division1() {
    int nb[1000];  // Tableau pour stocker les résultats
    int index = 0; // Index pour ajouter des valeurs dans le tableau

    for (int i = 1; i <= 1000; i++) {
        if (i % 4 == 0 && i % 6 != 0) {
            nb[index++] = i;
        }
    }

    printf("Les chiffres divisibles par 4 mais pas par 6 sont :\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", nb[i]);
    }
    printf("\n");
}

// Fonction qui ajoute dans une liste les chiffres paires et divisibles par 8
void division2() {
    int nb[1000];
    int index = 0;

    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0 && i % 8 == 0) {
            nb[index++] = i;
        }
    }

    printf("Les chiffres paires et divisibles par 8 sont :\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", nb[i]);
    }
    printf("\n");
}

// Fonction qui ajoute dans une liste les chiffres divisibles par 5 ou 7 mais pas par 10
void division3() {
    int nb[1000];
    int index = 0;

    for (int i = 1; i <= 1000; i++) {
        if ((i % 5 == 0 || i % 7 == 0) && i % 10 != 0) {
            nb[index++] = i;
        }
    }

    printf("Les chiffres divisibles par 5 ou 7 mais pas par 10 sont :\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", nb[i]);
    }
    printf("\n");
}

int main() {
    division1();
    division2();
    division3();

    return 0;
}
