#include <stdio.h>
#include <stdbool.h>

// Définition de la structure Couleur
struct Couleur {
    int r;
    int g;
    int b;
    int a;
};

// Fonction pour comparer deux couleurs
bool comparerCouleurs(struct Couleur c1, struct Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

// Fonction principale
int main() {
    // Déclaration d'un tableau de 100 couleurs
    struct Couleur couleurs[100] = {
        {255, 0, 0, 255}, {0, 255, 0, 255}, {0, 0, 255, 255}, 
        {255, 0, 0, 255}, {255, 255, 0, 255}, {0, 255, 0, 255}, 
        {0, 0, 255, 255}, {255, 0, 0, 255}, {255, 255, 0, 255}, 
        {0, 0, 255, 255}, {255, 0, 0, 255}, {0, 255, 0, 255}, 
        {0, 0, 255, 255}, {255, 0, 0, 255}, {255, 255, 0, 255}, 
        {0, 255, 0, 255}, {0, 0, 255, 255}, {255, 0, 0, 255}, 
        {255, 255, 0, 255}, {0, 0, 255, 255},
    };
// Structure pour stocker les couleurs et les occurrences
    struct Couleur couleursDistinctes[100];
    int occurrences[100] = {0};
    int nbCouleursDistinctes = 0;

    // Parcours du tableau
    for (int i = 0; i < 100; i++) {
        bool trouve = false;

        // Vérifier si la couleur est déjà dans le tableau des couleurs distinctes
        for (int j = 0; j < nbCouleursDistinctes; j++) {
            if (comparerCouleurs(couleurs[i], couleursDistinctes[j])) {
                occurrences[j]++;
                trouve = true;
                break;
            }
        }

        // Si la couleur n'est pas trouvée, l'ajouter
        if (!trouve) {
            couleursDistinctes[nbCouleursDistinctes] = couleurs[i];
            occurrences[nbCouleursDistinctes] = 1;
            nbCouleursDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et leurs occurrences
    printf("Couleurs distinctes et leurs occurrences :\n");
    for (int i = 0; i < nbCouleursDistinctes; i++) {
        printf("Couleur (R: %d, G: %d, B: %d, A: %d) - Occurrences: %d\n",
               couleursDistinctes[i].r, couleursDistinctes[i].g, couleursDistinctes[i].b, couleursDistinctes[i].a, occurrences[i]);
    }

    return 0;
}