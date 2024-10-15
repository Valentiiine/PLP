#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100 // Taille maximale de la pile


// Définir une structure pour les opérateurs et leur priorité
typedef struct {
    char operator;
    int priority;
} Operator;

// Tableau pour stocker les opérateurs et leurs priorités
Operator operators[] = {
    {'+', 1},
    {'-', 1},
    {'*', 2},
    {'/', 2},
};

// Structure pour la pile d'opérateurs
typedef struct {
    char items[MAX_SIZE]; // Tableau pour stocker les opérateurs
    int top;              // Indice du sommet de la pile
} OperatorStack;


// Fonction pour initialiser la pile d'opérateurs
void init_stack(OperatorStack *stack) {
    stack->top = -1; // Pile vide
}

int stack_vide(OperatorStack *stack) {
    return stack->top == -1; // Si top est -1, la pile est vide
}

// Fonction principale pour convertir une expression infixée en postfixée
void infix_to_postfix(const char *infix, char *postfix) {
    char chaine_sortie = ""; 
    for (int i=0; i< len(infix); i++){
        if stack_vide(){
            stack->items[++stack->top] = i;   
        }
    } 
}