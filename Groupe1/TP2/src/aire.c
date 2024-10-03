// Directive de préprocesseur pour inclure la bibliothèque mathématique
#include <math.h>  // Pour utiliser la constante M_PI

#include <stdio.h> 

// Fonction pour calculer l'aire d'un cercle
float calculer_aire(float rayon) {  
    // Utilisation de la constante pi de la bibliothèque mathématique
    return M_PI * rayon * rayon;
}

// Point d'entrée du programme
int main() {
    float rayon = 5.0;
    float aire = calculer_aire(rayon);
    // Affichage du résultat
    printf("L'aire du cercle de rayon %.2f est %.2f\n", rayon, aire);
    return 0;
}


//Exemple1
//----------------------

//Préprocesseur
// gcc -E aire.c -o aire.i -> exécution du préprocesseur du compilateur sur le fichier source "aire.c" et génère un fichier intermédiaire "aire.i". permet de voir le code une fois que toutes les macros et fichiers d’en-tête ont été inclus.

//Compilation
// gcc -O2 -S aire.i -o aire.s -> compilation du fichier préprocesseur "aire.i" en un fichier assembleur "aire.s". Traduction du code C (ou C préprocesseur) en instructions d'assemblage optimisées. Le fichier aire.s contient ce code assembleur qui est proche du langage machine, mais encore lisible par l’humain.

//Assemblage
// gcc -c aire.s -o aire.o -> compilation du fichier assembleur "aire.s" en un fichier objet "aire.o". Permet de convertir le fichier en code machine.

//Editions de liens
// gcc aire.o -lm -o aire -> liaison du fichier objet "aire.o" avec la bibliothèques pour créer un fichier exécutable.

//Exécution 
// ./aire -> exécution de l'exécutable "aire" généré à l'étape précédente.


//Exemple2
//----------------------

//Préprocesseur

//gcc -E main.c -o main.i
//gcc -E volume.c -o volume.i
//gcc -E surface.c -o surface.i

//Explication : Ces trois commandes exécutent le préprocesseur sur chacun des fichiers source (main.c, volume.c, surface.c) et génèrent des fichiers intermédiaires avec l'extension .i (main.i, volume.i, surface.i). À cette étape, on obtient le code prêt à être compilé, avec toutes les directives du préprocesseur résolues.

//Compilation

//gcc -O3 -c main.i -o main.o
//gcc -O3 -c volume.i -o volume.o
//gcc -O3 -c surface.i -o surface.o

//Explication : Production des fichiers objets (main.o, volume.o, surface.o) pour ces fichiers prétraités (main.i, volume.i, surface.i). Ces fichiers objets contiennent le code binaire, mais nécessitent encore l'étape d'édition de liens pour former un programme exécutable.

//Editions de liens

//gcc main.o volume.o surface.o -lm -o sphere

//Explication : Cette commande exécute l'édition de liens pour combiner les trois fichiers objets (main.o, volume.o, surface.o) en un fichier exécutable appelé sphere.

//Exécution 

//./sphere

//Explication : Cette commande exécute le programme compilé appelé sphere.
