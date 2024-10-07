import dis  # Importation du module "dis" pour désassembler le code

"""
def calculer_somme(n: int) -> int:
    somme = 0
    for i in range(n):  # Boucle `for` pour parcourir les entiers de 0 à n-1.
        somme += i  # Ajoute chaque valeur de `i` à `somme`.
    return somme  # Renvoie le résultat.
"""

# Deuxième version de la fonction "calculer_somme"
# Le bytecode est différent de la première fonction
def calculer_somme(n: int) -> int:
    somme = 0 
    i = 0  
    while i < n:  
        somme += i  # Ajoute "i" à la variable "somme"
        i += 1  
    return somme  # renvoie la somme calculée

# Fonction principale "main"
def main() -> None:
    n = 10  # Variable "n" qui est la limite
    resultat = calculer_somme(n)  
    print(f"La somme des entiers de 0 à {n-1} est {resultat}")  # Affiche le résultat sous forme lisible

if __name__ == "__main__":  
    # Utilisation du module ""dis" pour désassembler le bytecode 
    dis.dis(calculer_somme) 
    main()


"""
 `LOAD_GLOBAL 0 (range)` : Charge la fonction globale `range`.
- `CALL_FUNCTION 1` : Appelle `range(n)` avec un argument.
- `GET_ITER` : Récupère un itérateur à partir de `range`.
- `FOR_ITER 16` : Obtient l'élément suivant de l'itérateur. Si aucun élément n'est disponible, saute à la fin de la boucle.
- `INPLACE_ADD` : Ajoute la valeur courante de `i` à `somme`.


Remplacment de la boucle for par la boucle while


- La boucle while utilise des instructions comme `COMPARE_OP` pour comparer `i` et `n`, et des sauts conditionnels (`POP_JUMP_IF_FALSE` et `JUMP_ABSOLUTE`).
- La boucle for utilise `FOR_ITER` pour gérer l'itération et la fin de la boucle.
- La boucle while est plus explicite, avec des instructions supplémentaires pour gérer manuellement l'indice `i` et les conditions de fin.

"""