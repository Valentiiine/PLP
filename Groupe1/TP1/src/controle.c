#include <stdio.h>

// Fonction qui ajoute dans une liste les chiffres divisibles par 4 mais pas par 6
void division1() {
    int nb[1000];  // Tableau pour stocker les résultats (jusqu'à 1000 éléments)
    int index = 0; // Variable pour suivre l'indice où insérer les nombres dans le tableau

    for (int i = 1; i <= 1000; i++) {  // Boucle de 1 à 1000 inclus
        if (i % 4 == 0 && i % 6 != 0) {  // Si i est divisible par 4 mais pas par 6
            nb[index++] = i;  // Ajouter i au tableau et incrémenter 'index'
        }
    }

    // Affichage des résultats
    printf("Les chiffres divisibles par 4 mais pas par 6 sont :\n");
    for (int i = 0; i < index; i++) {  // Boucle pour afficher tous les éléments stockés dans le tableau
        printf("%d ", nb[i]);  // Afficher chaque nombre séparé par un espace
    }
    printf("\n");  // Nouvelle ligne après l'affichage
}

// Fonction qui ajoute dans une liste les chiffres paires et divisibles par 8
void division2() {
    int nb[1000];  // Tableau pour stocker les résultats
    int index = 0; // Variable pour suivre l'indice

    for (int i = 1; i <= 1000; i++) {  // Boucle de 1 à 1000 inclus
        if (i % 2 == 0 && i % 8 == 0) {  // Si i est pair et divisible par 8
            nb[index++] = i;  // Ajouter i au tableau
        }
    }

    // Affichage des résultats
    printf("Les chiffres paires et divisibles par 8 sont :\n");
    for (int i = 0; i < index; i++) {  // Boucle pour afficher tous les éléments du tableau
        printf("%d ", nb[i]);
    }
    printf("\n");
}

// Fonction qui ajoute dans une liste les chiffres divisibles par 5 ou 7 mais pas par 10
void division3() {
    int nb[1000];  // Tableau pour stocker les résultats
    int index = 0; // Variable pour suivre l'indice

    for (int i = 1; i <= 1000; i++) {  // Boucle de 1 à 1000 inclus
        if ((i % 5 == 0 || i % 7 == 0) && i % 10 != 0) {  // Si i est divisible par 5 ou 7 mais pas par 10
            nb[index++] = i;  // Ajouter i au tableau
        }
    }

    // Affichage des résultats
    printf("Les chiffres divisibles par 5 ou 7 mais pas par 10 sont :\n");
    for (int i = 0; i < index; i++) {  // Boucle pour afficher tous les éléments du tableau
        printf("%d ", nb[i]);
    }
    printf("\n");
}

int main() {
    // Appel des trois fonctions pour afficher les résultats
    division1();
    division2();
    division3();

    return 0;  // Indique que le programme s'est terminé avec succès
}
