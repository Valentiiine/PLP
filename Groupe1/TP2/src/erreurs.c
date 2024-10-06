#include <stdio.h> //Ajout de la librairie stdio.h

int main() {

   int tableau[100]; // Le tableau a 100 éléments mais sans des valeurs

   for (int compteur = 0; compteur < sizeof(tableau); compteur++) { //Erreur car on prend la taille en octet du tableau et non pas en indice
       tableau[compteur] = tableau[compteur] * 2; //Ici on cherche dans les tableaux avec un compteur comme indices mais qui va dépasser la taille du tableau
   }

   return (0);
}