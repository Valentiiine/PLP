dd#include <stdio.h>
#include "sphere.h"

int main() {
    float rayon = 5.0;
    float volume = calculer_volume(rayon);
    float surface = calculer_surface(rayon);

    printf("Le volume de la sphère de rayon %.2f est %.2f\n", rayon, volume);
    printf("La surface de la sphère de rayon %.2f est %.2f\n", rayon, surface);

    return 0;
}

"""
Explication des instructions :
- `LOAD_GLOBAL 0 (math)` : Charge le module global `math` en mémoire.
- `LOAD_ATTR 1 (pi)` : Accède à l'attribut `pi` du module `math`.
- `LOAD_FAST 0 (rayon)` : Charge la variable locale `rayon` dans la pile.
- `BINARY_MULTIPLY` : Multiplie les deux éléments au sommet de la pile (ici `rayon * rayon`).
- `RETURN_VALUE` : Retourne la valeur calculée au sommet de la pile.


!!! Remplacement de ` math.pi * rayon * rayon` par une valeur constante`


- Dans cette version, `LOAD_GLOBAL`, `LOAD_ATTR`, et les deux `BINARY_MULTIPLY` ont été supprimés.
- Python a directement chargé la constante `78.54`, ce qui réduit le bytecode à seulement deux instructions : `LOAD_CONST` et `RETURN_VALUE`.
"""