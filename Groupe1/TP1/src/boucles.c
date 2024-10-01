#include <stdio.h> // Inclusion de la bibliothèque standard pour les fonctions d'entrée/sortie (printf, scanf).

// Fonction qui dessine un triangle rectangle avec une taille donnée
void triangle_rectangle(int taille) {

    // Vérification si la taille dépasse 10
    if (taille > 10) {
        // Si la taille est supérieure à 10, un message est affiché et la fonction retourne
        printf("La taille du triangle doit être inférieure à 10 pour avoir un triangle rectangle\n");
        return;// On quitte la fonction sans dessiner le triangle
    }
    // Boucle pour créer chaque ligne du triangle
    for (int i = 1; i <= taille; i++) {
        // Si on est à la première ligne ou à la dernière, on dessine seulement des '*'
        if (i == 1 || i == taille) {
            // Boucle pour afficher 'i' étoiles
            for (int j = 0; j < i; j++) {
                printf("*"); // Affiche une étoile
            }
        } else {
            // Si ce n'est pas la première ou la dernière ligne
            printf("*"); // On commence la ligne par une étoile
            // Boucle pour afficher des '#' entre les étoiles, sauf si on est sur la 2e ligne
            for (int j = 1; j < i - 1; j++) {
                printf("#"); // Affiche des '#'
            }
            printf("*"); // On termine la ligne par une étoile
        }
        // Passage à la ligne suivante après chaque ligne du triangle
        printf("\n");
    }
}

int main() {
    int taille; // Déclaration d'une variable pour stocker la taille du triangle
    // Demande à l'utilisateur de saisir la taille du triangle
    printf("Quelle est la taille de votre triangle ? ");
    scanf("%d", &taille); // Lecture de la taille entrée par l'utilisateur
    // Appel de la fonction pour dessiner le triangle rectangle
    triangle_rectangle(taille);

    return 0; // Fin du programme
}
