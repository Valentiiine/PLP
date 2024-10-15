#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lexer.h"

void extract_numbers_and_operator(const char* expression, int* num1, int* num2, char* operator) {
    // Utilisation de sscanf pour extraire deux nombres et l'opérateur
    sscanf(expression, "%d %c %d", num1, operator, num2);
}

