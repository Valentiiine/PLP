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