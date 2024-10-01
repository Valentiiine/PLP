# Fonction qui ajoute dans une liste les chiffres divisibles par 4 mais pas par 6
def division1():
    nb = []  # Initialisation d'une liste vide pour stocker les nombres correspondants
    for i in range(1, 1000 + 1):  # Boucle sur les nombres de 1 à 1000 inclus
        if i % 4 == 0 and i % 6 != 0:  # Si i est divisible par 4 mais pas par 6
            nb.append(i)  # Ajouter i à la liste 'nb'
        else:
            continue  # Si i ne remplit pas les conditions, passer au nombre suivant
    print(nb)  # Affichage de la liste 'nb' après avoir ajouté les éléments correspondants
    return  # La fonction retourne None (car aucune valeur n'est explicitement retournée)


# Fonction qui ajoute dans une liste les chiffres pairs et divisibles par 8
def division2():
    nb = []  # Initialisation d'une nouvelle liste vide
    for i in range(1, 1000 + 1):  # Boucle de 1 à 1000
        if i % 2 == 0 and i % 8 == 0:  # Si i est pair (divisible par 2) et divisible par 8
            nb.append(i)  # Ajouter i à la liste 'nb'
        else:
            continue  # Si les conditions ne sont pas remplies, passer au nombre suivant
    print(nb)  # Affichage de la liste 'nb'
    return  # La fonction retourne None


# Fonction qui ajoute dans une liste les chiffres divisibles par 5 ou 7 mais pas par 10
def division3():
    nb = []  # Initialisation de la liste vide
    for i in range(1, 1000 + 1):  # Boucle de 1 à 1000
        if (i % 5 == 0 or i % 7 == 0) and i % 10 != 0:  # Si i est divisible par 5 ou 7, mais pas par 10
            nb.append(i)  # Ajouter i à la liste 'nb'
        else:
            continue  # Passer au prochain nombre si les conditions ne sont pas remplies
    print(nb)  # Afficher la liste 'nb'
    return  # La fonction retourne None


# Affichage des résultats en appelant les trois fonctions
print("Les chiffres divisibles par 4 mais pas par 6 sont : ", division1())  
# Appelle la fonction 'division1' et affiche le résultat. 


print("Les chiffres paires et divisibles par 8 : ", division2())  
# Même cas : 'division2()' affiche la liste.

print("Les chiffres divisibles par 5 ou 7 mais pas par 10 sont : ", division3())  
# Idem pour 'division3()' : liste affichée.
