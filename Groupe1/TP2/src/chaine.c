#include <stdio.h>

// Fonction pour calculer la longueur d'une chaîne de caractères
int longueur_chaine(const char* str) {
    int longueur = 0;
    while (str[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

// Fonction pour copier une chaîne dans une autre
void copie_chaine(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Ajoute le caractère nul à la fin de la chaîne copiée
}

// Fonction pour concaténer deux chaînes
void concatene_chaine(char* destination, const char* source1, const char* source2) {
    int i = 0, j = 0;
    
    // Copier la première chaîne dans destination
    while (source1[i] != '\0') {
        destination[i] = source1[i];
        i++;
    }
    
    // Ajouter la deuxième chaîne à la fin de la première
    while (source2[j] != '\0') {
        destination[i + j] = source2[j];
        j++;
    }
    
    destination[i + j] = '\0'; // Ajouter le caractère nul à la fin
}

int main() {
    char chaine1[100], chaine2[100], resultat[200];

    // Demander à l'utilisateur de saisir deux chaînes
    printf("Entrez la première chaîne : ");
    scanf("%99s", chaine1);  // Limite à 99 caractères pour éviter le dépassement de buffer
    printf("Entrez la deuxième chaîne : ");
    scanf("%99s", chaine2);

    // Calcul de la longueur des chaînes
    printf("Longueur de la première chaîne : %d\n", longueur_chaine(chaine1));
    printf("Longueur de la deuxième chaîne : %d\n", longueur_chaine(chaine2));

    // Copie de la première chaîne
    copie_chaine(resultat, chaine1);
    printf("Copie de la première chaîne : %s\n", resultat);

    // Concaténation des deux chaînes
    concatene_chaine(resultat, chaine1, chaine2);
    printf("Concaténation des deux chaînes : %s\n", resultat);

    return 0;
}
