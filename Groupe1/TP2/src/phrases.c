#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024 // Définition de la taille maximale d'une ligne (en caractères)

// Fonction pour compter les occurrences d'une sous-chaîne (phrase) dans une chaîne (ligne)
int count_occurrences(const char *line, const char *phrase) {
    int count = 0; // Variable pour stocker le nombre d'occurrences
    const char *temp = line; // Pointeur temporaire pour parcourir la ligne
    // Boucle pour rechercher toutes les occurrences de la phrase dans la ligne
    while ((temp = strstr(temp, phrase)) != NULL) {
        count++; // Incrémenter le compteur d'occurrences
        temp += strlen(phrase); // Avancer le pointeur pour rechercher la prochaine occurrence
    }
    return count; // Retourner le nombre total d'occurrences trouvées
}

int main() {
    char filename[100], phrase[100], line[MAX_LINE_LENGTH]; // Variables pour le nom du fichier, la phrase et la ligne lue
    FILE *file; // Pointeur vers le fichier
    int line_number = 0; // Variable pour garder la trace du numéro de ligne

    // Demander à l'utilisateur de saisir le nom du fichier à analyser
    printf("Entrez le nom du fichier : ");
    scanf("%s", filename); // Lecture du nom du fichier saisi par l'utilisateur

    // Demander à l'utilisateur de saisir la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // Consommer le '\n' restant dans le tampon après l'appel à scanf
    fgets(phrase, sizeof(phrase), stdin); // Lire la phrase saisie par l'utilisateur
    phrase[strcspn(phrase, "\n")] = 0; // Retirer le saut de ligne '\n' ajouté par fgets

    // Ouvrir le fichier en mode lecture
    file = fopen(filename, "r");
    // Vérifier si le fichier s'est ouvert correctement
    if (file == NULL) {
        // Si le fichier ne s'ouvre pas, afficher un message d'erreur et quitter le programme
        perror("Erreur lors de l'ouverture du fichier");
        return 1; // Code de retour indiquant une erreur
    }

    // Lire le fichier ligne par ligne
    while (fgets(line, sizeof(line), file)) {
        line_number++; // Incrémenter le numéro de la ligne
        // Compter les occurrences de la phrase dans la ligne actuelle
        int occurrences = count_occurrences(line, phrase);
        // Si la phrase est trouvée dans cette ligne, afficher le numéro de ligne et le nombre d'occurrences
        if (occurrences > 0) {
            printf("Ligne %d, %d fois\n", line_number, occurrences);
        }
    }

    // Fermer le fichier après la lecture
    fclose(file);

    return 0; // Code de retour indiquant que le programme s'est terminé correctement
}
