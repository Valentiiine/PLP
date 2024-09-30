#include <stdio.h>

int main() {
    // Affichage des tailles pour les types de base
    printf("Taille de char: %lu octets\n", sizeof(char));
    printf("Taille de signed char: %lu octets\n", sizeof(signed char));
    printf("Taille de unsigned char: %lu octets\n", sizeof(unsigned char));

    printf("Taille de short: %lu octets\n", sizeof(short));
    printf("Taille de signed short: %lu octets\n", sizeof(signed short));
    printf("Taille de unsigned short: %lu octets\n", sizeof(unsigned short));

    printf("Taille de int: %lu octets\n", sizeof(int));
    printf("Taille de signed int: %lu octets\n", sizeof(signed int));
    printf("Taille de unsigned int: %lu octets\n", sizeof(unsigned int));

    printf("Taille de long int: %lu octets\n", sizeof(long int));
    printf("Taille de signed long int: %lu octets\n", sizeof(signed long int));
    printf("Taille de unsigned long int: %lu octets\n", sizeof(unsigned long int));

    printf("Taille de long long int: %lu octets\n", sizeof(long long int));
    printf("Taille de unsigned long long int: %lu octets\n", sizeof(unsigned long long int));

    printf("Taille de float: %lu octets\n", sizeof(float));
    printf("Taille de double: %lu octets\n", sizeof(double));
    printf("Taille de long double: %lu octets\n", sizeof(long double));

    return 0;
}
