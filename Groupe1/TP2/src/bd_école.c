#include <stdio.h>
#include <string.h>

#define MAX_ETUDIANTS 5
#define TAILLE_NOM 50
#define TAILLE_ADRESSE 100
#define NB_NOTES 2

// Définition de la structure Étudiant
struct Etudiant {
    char nom[TAILLE_NOM];
    char prenom[TAILLE_NOM];
    char adresse[TAILLE_ADRESSE];
    float notes[NB_NOTES];
};

// Fonction pour afficher les informations d'un étudiant
void afficher_etudiant(struct Etudiant e) {
    printf("Nom : %s\n", e.nom);
    printf("Prénom : %s\n", e.prenom);
    printf("Adresse : %s\n", e.adresse);
    for (int i = 0; i < NB_NOTES; i++) {
        printf("Note %d : %.2f\n", i + 1, e.notes[i]);
    }
    printf("\n");
}

int main() {
    struct Etudiant etudiants[MAX_ETUDIANTS];
    
    // Saisie des informations pour chaque étudiant
    for (int i = 0; i < MAX_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        getchar();  // Pour consommer le saut de ligne après scanf
        fgets(etudiants[i].adresse, TAILLE_ADRESSE, stdin);
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0'; // Supprimer le '\n'
        
        for (int j = 0; j < NB_NOTES; j++) {
            printf("Note %d : ", j + 1);
            scanf("%f", &etudiants[i].notes[j]);
        }
        printf("\n");
    }
    
    // Affichage des informations des étudiants
    for (int i = 0; i < MAX_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        afficher_etudiant(etudiants[i]);
    }
    
    return 0;
}
