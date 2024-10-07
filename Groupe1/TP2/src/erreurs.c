#include <stdio.h> //Ajout de la librairie stdio.h

int main() {

   int tableau[100]; // Le tableau a 100 éléments mais sans des valeurs

   for (int compteur = 0; compteur < sizeof(tableau); compteur++) { //Erreur car on prend la taille en octet du tableau et non pas en indice
       tableau[compteur] = tableau[compteur] * 2; //Ici on cherche dans les tableaux avec un compteur comme indices mais qui va dépasser la taille du tableau
   }

   return (0);
}

//Introduction à gdb en C
//$ gcc -ggdb3 erreurs.c -o erreurs -> Compiler avec les informations de débogage
//$ gdb erreurs -> Démarrer GDB
//(gdb) r -> Exécuter le programme dans GDB
//(gdb) break erreurs.c:10 -> Ajouter des breakpoints

//L'erreur principale est que la condition de la boucle utilise sizeof(tableau) 
//qui renvoie la taille en octets, et non le nombre d'éléments. Cela conduit à une
//tentative d'accès à des indices de tableau hors limites

//Pour corriger cela, il faut remplacer `sizeof(tableau)` par `100`
