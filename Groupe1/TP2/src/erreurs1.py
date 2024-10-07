from typing import List
import pdb #Bibliothèque qui permet de faire le débogeur comme gdb

def double_values(tableau: List[int]) -> None:
    for compteur in range(len(tableau)):
        # Introduire une erreur : parfois multiplier par 3 au lieu de 2
       
        tableau[compteur] *= 2  #Double la valeur à l'indice du compteur du tableau 
        
        # Insérer un point d'arrêt pour observer la valeur de 'tableau' à chaque étape
        pdb.set_trace()

    return tableau

# Créer un tableau d'exemple
tableau: List[int] = [1, 2, 3, 4, 5]

# Appeler la fonction et stocker le résultat
resultat = double_values(tableau)

# Afficher le résultat final
print(resultat)

"""
fichier erreurs1.py
Programme avec une ereur, corrigée au cours de l'exercice. 
Utilisation de pdb pour debogger le code grâce a u point d'arrêt présent dans le code

Le problème est que pour les indices impairs, les valeurs sont multipliées par 3 au lieu de 2.
il suffit de supprimer la condition else
"""