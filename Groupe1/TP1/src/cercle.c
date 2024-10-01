#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

#define PI 3.14159   // Définition d'une constante pour la valeur de π (Pi)

int main() {   // Début du programme principal
    double rayon, aire, perimetre;   // Déclaration de trois variables pour stocker le rayon, l'aire et le périmètre

    // Demande du rayon à l'utilisateur
    printf("Entrez le rayon du cercle: ");   // Affichage d'un message demandant à l'utilisateur d'entrer le rayon
    scanf("%lf", &rayon);   // Lecture du rayon entré par l'utilisateur et stockage dans la variable 'rayon'

    // Calcul de l'aire et du périmètre
    aire = PI * rayon * rayon;   // Calcul de l'aire du cercle selon la formule: π * rayon²
    perimetre = 2 * PI * rayon;   // Calcul du périmètre du cercle selon la formule: 2 * π * rayon

    // Affichage des résultats
    printf("L'aire du cercle est: %.2lf\n", aire);   // Affiche l'aire du cercle avec deux décimales
    printf("Le périmètre du cercle est: %.2lf\n", perimetre);   // Affiche le périmètre du cercle avec deux décimales

    return 0;   // Indique la fin normale du programme
}
