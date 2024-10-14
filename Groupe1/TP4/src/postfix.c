#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "postfix.h"

#define MAX_STACK_SIZE 100

// Structure pour la pile des opérateurs
typedef struct {
    char data[MAX_STACK_SIZE];
    int top;
} Stack;

// Initialiser la pile
void init_stack(Stack *stack) {
    stack->top = -1;
}

// Vérifier si la pile est vide
int is_empty(Stack *stack) {
    return stack->top == -1;
}

// Vérifier si la pile est pleine
int is_full(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

// Empiler un élément
void push(Stack *stack, char op) {
    if (!is_full(stack)) {
        stack->data[++stack->top] = op;
    }
}

// Dépiler un élément
char pop(Stack *stack) {
    if (!is_empty(stack)) {
        return stack->data[stack->top--];
    }
    return '\0';  // Valeur par défaut en cas d'erreur
}

// Obtenir l'élément au sommet de la pile
char peek(Stack *stack) {
    if (!is_empty(stack)) {
        return stack->data[stack->top];
    }
    return '\0';  // Valeur par défaut en cas d'erreur
}

// Fonction pour donner la priorité des opérateurs
int precedence(char op) {
    if (op == '*' || op == '/') {
        return 2;
    } else if (op == '+' || op == '-') {
        return 1;
    }
    return 0;
}

// Fonction principale pour convertir une expression infixée en postfixée
void infix_to_postfix(const char *infix, char *postfix) {
    Stack stack;
    init_stack(&stack);
    
    int i, j = 0;
    char token;
    
    // Parcourir l'expression infixée
    for (i = 0; infix[i] != '\0'; i++) {
        token = infix[i];
        
        // Si le caractère est un opérande (nombre), l'ajouter à l'expression postfixée
        if (isdigit(token)) {
            postfix[j++] = token;
        }
        // Si le caractère est une parenthèse ouvrante, le pousser sur la pile
        else if (token == '(') {
            push(&stack, token);
        }
        // Si le caractère est une parenthèse fermante, dépiler jusqu'à la parenthèse ouvrante
        else if (token == ')') {
            while (!is_empty(&stack) && peek(&stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            pop(&stack);  // Retirer la parenthèse ouvrante
        }
        // Si le caractère est un opérateur
        else if (token == '+' || token == '-' || token == '*' || token == '/') {
            while (!is_empty(&stack) && precedence(peek(&stack)) >= precedence(token)) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }
    }
    
    // Dépiler les opérateurs restants sur la pile
    while (!is_empty(&stack)) {
        postfix[j++] = pop(&stack);
    }
    
    // Terminer la chaîne postfixée
    postfix[j] = '\0';
}
