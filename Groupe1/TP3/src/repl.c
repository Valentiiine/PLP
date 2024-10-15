#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lexer.h"
#include "parseur.h"
#include "evaluation.h"
/**
 * Programme qui simule un interpréteur de commandes simple.
 * Il lit les commandes utilisateur et les traite en fonction de leur contenu.
 */

struct Commande{
    char* commande;
    void (*fonction)(char*);
};


void afficher_version()
{
    printf("Version de l'interpréteur : 5.0");
};

void traiter_quit(int* continuer)
{
    // Quitte le programme si la commande est "quit"
    printf("Arrêt...\n");
    *continuer = 0;
};

void afficher_aide()
{
    printf("Commandes disponibles :\n");
    printf("  help        : Affiche cette aide (anglais).\n");
    printf("  aide        : Affiche cette aide (français).\n");
    printf("  version     : Affiche la version du programme.\n");
    printf("  date     : Affiche la date d'aujourd'hui.\n");
    printf("  echo <text> : Affiche le texte saisi.\n");
    printf("  quit        : Quitte l'interpréteur de commandes (anglais).\n");
    printf("  quitter        : Quitte l'interpréteur de commandes (français).\n");
};

void traiter_echo(char* commande)
{
    printf("Echo: %s\n", commande + 5);
};

void afficher_date()
{
    printf("La date d'aujourd'hui est : " __DATE__);
};

// Fonction pour normaliser la commande en minuscule
void to_lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char) str[i]);
    }
}

int main()
{
    int continuer = 1; // Variable pour contrôler la boucle principale
    
    struct Commande commandes[] = {
        {"echo" , traiter_echo},
        {"version", afficher_version},
        {"date", afficher_date},
        {"aide", afficher_aide},
        {"help", afficher_aide},
        {"quit", /*(void (*)(char *))*/traiter_quit},
        {"quitter", /*(void (*)(char *))*/traiter_quit},

    };
    // Boucle principale qui lit et traite les commandes utilisateur
    while (continuer)
    {
        printf("> "); // Affiche le prompt de commande

        // Buffer pour stocker la commande utilisateur
        char commande[1024];

        // Lit la commande utilisateur et la stocke dans le buffer
        fgets(commande, sizeof(commande), stdin);

        // Enlève le caractère de fin de ligne ajouté par fgets
        commande[strcspn(commande, "\n")] = 0;

        // Convertir la commande en minuscules pour gérer la casse
        char commande_copie[1024];
        strcpy(commande_copie, commande);
        to_lowercase(commande_copie);
        int commande_reconnue=0;


        for (int i =0; i < sizeof(commandes) / sizeof(commandes[0]); i++){
            
            if (strcmp(commande_copie, commandes[i].commande) == 0){
                if (strcmp(commandes[i].commande, "quit") == 0|| strcmp(commandes[i].commande, "quitter")==0)
                {
                     traiter_quit(&continuer);
                     //continuer=0;
                }
                else
                {
                    commandes[i].fonction(commande);
                }
                commande_reconnue=1;
                break;
            }
            
            else if (strncmp(commande_copie, "echo ", 5) == 0 ){
                traiter_echo(commande);
                commande_reconnue=1;
                break;
            }

        }

        if(!commande_reconnue)
        {       Expression result;
                if (parse_expression(commande, &result)) {
                commande_reconnue=1;
                /*// Si la syntaxe est correcte, afficher la représentation interne
                printf("Opération : %c\n", result.operator);
                printf("Opérande 1 : %d\n", result.operand1);
                printf("Opérande 2 : %d\n", result.operand2);*/

                // Appeler la fonction d'évaluation
                double eval_result = eval_expression(result);
                printf("Le résultat est : %.2f\n", eval_result);
                } else {
                printf("Erreur lors du traitement de l'expression.\n");
                break;
                }}

        if (!commande_reconnue)
        {
            // Affiche un message d'erreur si la commande est inconnue
            printf("Commande non reconnue. Essayez 'help' ou 'aide' pour voir les commandes disponibles.\n");
        }

       /*  // Traite la commande en fonction de son contenu
        if (strcmp(commande, "quit") == 0)
        {
            traiter_quit();
            continuer=0;
        }
        else if (strncmp(commande, "echo ", 5) == 0)
        {
            traiter_echo(commande);
            printf("\n"); // Saut de ligne après la sortie
        }
        else if (strcmp(commande, "date") == 0)
        {
            printf(__DATE__);
            printf("\n"); // Saut de ligne après la sortie
        }
        else if (strcmp(commande, "version") == 0)
        {
            afficher_version();
            printf("\n"); // Saut de ligne après la sortie
        }
        else if (strcmp(commande, "help") == 0)
        {
            afficher_aide();
            printf("\n"); // Saut de ligne après la sortie
        } */

        /* if 
        {
            // Affiche un message d'erreur si la commande est inconnue
            printf("Commande non reconnue. Essayez 'help' pour voir les commandes disponibles.\n");
        } */

        printf("\n"); // Saut de ligne après la sortie
    }
   
    return 0;

}