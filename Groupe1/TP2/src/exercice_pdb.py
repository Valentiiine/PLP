from typing import List

def double_values(tableau: List[int]) -> None:
    for compteur in range(len(tableau)):
        # Introduire une erreur : parfois multiplier par 3 au lieu de 2
        if compteur % 2 == 0:
            tableau[compteur] *= 2
        else:
            tableau[compteur] *= 3

    return tableau

# Créer un tableau d'exemple
tableau: List[int] = [1, 2, 3, 4, 5]

# Appeler la fonction et stocker le résultat
resultat = double_values(tableau)

# Afficher le résultat final
print(resultat)

# ============= Version corrigé ==================
def double_values2(tableau: List[int]) -> None:
    for compteur in range(len(tableau)):
        tableau[compteur] *= 2  # Toujours multiplier par 2
    return tableau


# Créer un tableau d'exemple
tableau: List[int] = [1, 2, 3, 4, 5]

resultat = double_values2(tableau)

# Afficher le résultat final
print(resultat)


#Programme avec une erreur, corrgiée au cours de l'exercice.
#Permettant d'explorer les fonctionnalités de pdb.

#Python3 -m pdb exercice_pdb.py
#Les indices impairs (1, 3, 5, ...) sont incorrectement multipliés par 3, comme observé en pdb