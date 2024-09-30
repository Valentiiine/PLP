#include <stdio.h>

void triangle_rectangle(int taille) {

    if (taille > 10) {
        printf("La taille du triangle doit être inférieure à 10 pour avoir un triangle rectangle\n");
        return;
    }

    for (int i = 1; i <= taille; i++) {
        if (i == 1 || i == taille) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 1; j < i - 1; j++) {
                printf("#");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int taille;
    printf("Quelle est la taille de votre triangle ? ");
    scanf("%d", &taille);

    triangle_rectangle(taille);

    return 0;
}
