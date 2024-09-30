#include <stdio.h>

#define PI 3.14159

int main() {
    double rayon, aire, perimetre;

    // Demande du rayon à l'utilisateur
    printf("Entrez le rayon du cercle: ");
    scanf("%lf", &rayon);

    // Calcul de l'aire et du périmètre
    aire = PI * rayon * rayon;
    perimetre = 2 * PI * rayon;

    // Affichage des résultats
    printf("L'aire du cercle est: %.2lf\n", aire);
    printf("Le périmètre du cercle est: %.2lf\n", perimetre);

    return 0;
}