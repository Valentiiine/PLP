#include <stdio.h>

// Fonction pour calculer la longueur d'une chaîne de caractères
int longueur_chaine(const char* str) {
    int longueur = 0;
    // Boucle tant que le caractère courant n'est pas '\0' (le caractère nul)
    while (str[longueur] != '\0') {
        longueur++;  // Incrémenter la longueur pour chaque caractère
    }
    return longueur;  // Retourner la longueur de la chaîne
}

// Fonction pour copier une chaîne dans une autre
void copie_chaine(char* destination, const char* source) {
    int i = 0;
    // Boucle pour copier chaque caractère de la source vers la destination
    while (source[i] != '\0') {
        destination[i] = source[i];  // Copier le caractère de source à destination
        i++;
    }
    destination[i] = '\0';  // Ajouter le caractère nul à la fin de la chaîne copiée
}

// Fonction pour concaténer deux chaînes
void concatene_chaine(char* destination, const char* source1, const char* source2) {
    int i = 0, j = 0;
    
    // Copier la première chaîne (source1) dans destination
    while (source1[i] != '\0') {
        destination[i] = source1[i];  // Ajouter chaque caractère de source1 à destination
        i++;
    }
    
    // Ajouter la deuxième chaîne (source2) à la suite de destination
    while (source2[j] != '\0') {
        destination[i + j] = source2[j];  // Ajouter chaque caractère de source2 à destination
        j++;
    }
    
    destination[i + j] = '\0';  // Ajouter le caractère nul à la fin de la chaîne concaténée
}

int main() {
    // Déclaration des chaînes de caractères avec des tailles maximales
    char chaine1[100], chaine2[100], resultat[200];  // `resultat` doit être assez grand pour contenir les deux chaînes concaténées

    // Demander à l'utilisateur de saisir deux chaînes
    printf("Entrez la première chaîne : ");
    // Utilisation de `scanf` pour lire la première chaîne, limité à 99 caractères pour éviter le dépassement de buffer
    scanf("%99s", chaine1);
    printf("Entrez la deuxième chaîne : ");
    // Utilisation de `scanf` pour lire la deuxième chaîne, limité à 99 caractères également
    scanf("%99s", chaine2);

    // Calcul et affichage de la longueur des deux chaînes
    printf("Longueur de la première chaîne : %d\n", longueur_chaine(chaine1));  // Affiche la longueur de `chaine1`
    printf("Longueur de la deuxième chaîne : %d\n", longueur_chaine(chaine2));  // Affiche la longueur de `chaine2`

    // Copie de la première chaîne dans `resultat`
    copie_chaine(resultat, chaine1); //appel de la fonction "copie_chaine" pour copier la chaine1 donc le resultat sera stocké dans la variable "copie"
    printf("Copie de la première chaîne : %s\n", resultat);  // Affichage du résultat de la copie

    // Concaténation des deux chaînes dans `resultat`
    concatene_chaine(resultat, chaine1, chaine2); // appel de la fonction "concatene_chaine" pour Concaténer les deux chaînes donc le resultat sera stocké dans la variable "concatenation"
    printf("Concaténation des deux chaînes : %s\n", resultat);   //Affichage du résultat de la concaténation

    return 0;
}
