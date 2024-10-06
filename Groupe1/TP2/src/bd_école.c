#include <stdio.h>
#include <string.h>

// Définition de la structure Etudiant
struct Etudiant {
    char nom[100];
    char prenom[100];
    char adresse[200];
    float notes[2];
};


// Initialisation des données des étudiants avec des valeurs par défaut
void initialiserEtudiant(struct Etudiant *etudiant) {
    strcpy(etudiant->prenom, "Par défaut");  //Copie de la valeur "Par défaut" dans les éléments de la structure
    strcpy(etudiant->nom, "Par défaut");
    strcpy(etudiant->adresse, "Par défaut");
    //strcpy(etudiant->notes[0], 0.0);

    // Initialisation des notes
    for (int i = 0; i < 2; i++) {
        etudiant->notes[i] = 0.0;  //Initialisation des notes à 0
    }
}

// Affichage des informations d'un étudiant
void afficher_etudiant(struct Etudiant etudiant) {
    printf("Nom : %s\n", etudiant.nom); //Affiche le Nom
    printf("Prénom : %s\n", etudiant.prenom); //Affiche le prénom
    printf("Adresse : %s\n", etudiant.adresse); //Affiche l'adresse
    for (int i = 0; i < 2; i++) {
        printf("Note %d : %.2f\n", i + 1, etudiant.notes[i]); //Affiche les notes
    }
    printf("\n"); //retour à la ligne
}

int main() {
    struct Etudiant etudiants[5]; //Tableau pour stocker les 5 étudiant
    
    for (int i = 0; i < 5; i++) {
        initialiserEtudiant(&etudiants[i]); // Initialisation de chaque étudiant avec des valeurs par défaut
    }

    // Saisie par l'utilisateur des informations pour chaque étudiant
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1); //Affiche l'étudiant N°
        printf("Nom : "); // Affcihe ce que l'utilisateur doit rentrer
        scanf("%s", etudiants[i].nom); // Récupère la chaine de caracht"re rentré par l'utilisateur
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        scanf("%s", etudiants[i].adresse);
        
        for (int j = 0; j < 2; j++) {
            printf("Note %d : ", j + 1); //Demande de rentrer la note 1 puis 2
            scanf("%f", &etudiants[i].notes[j]);
        }
        printf("\n"); //retoure à la ligne
    }
    
    // Affichage des informations des étudiants
    printf("\nAffichage des informations des étudiants \n");
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1); 
        afficher_etudiant(etudiants[i]); //Appelle de la fonction pour afficher toutes les informations de la liste d'étudiants
    }
    
    return 0; //return 0 
}
