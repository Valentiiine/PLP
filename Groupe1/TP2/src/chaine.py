# Fonction pour calculer la longueur d'une chaîne de caractères
def longueur_chaine(chaine):
    longueur = 0
    for caractere in chaine:
        longueur += 1
    return longueur

# Fonction pour copier une chaîne de caractères dans une autre
def copie_chaine(source):
    destination = ''
    for caractere in source:
        destination += caractere
    return destination

# Fonction pour concaténer deux chaînes de caractères
def concatene_chaine(source1, source2):
    resultat = ''
    
    # Copier la première chaîne dans le résultat
    for caractere in source1:
        resultat += caractere
    
    # Ajouter la deuxième chaîne à la fin
    for caractere in source2:
        resultat += caractere
    
    return resultat

if __name__ == "__main__":
    # Demander à l'utilisateur de saisir deux chaînes
    chaine1 = input("Entrez la première chaîne : ")
    chaine2 = input("Entrez la deuxième chaîne : ")

    # Calcul de la longueur des chaînes
    print("Longueur de la première chaîne :", longueur_chaine(chaine1))
    print("Longueur de la deuxième chaîne :", longueur_chaine(chaine2))

    # Copie de la première chaîne
    copie = copie_chaine(chaine1)
    print("Copie de la première chaîne :", copie)

    # Concaténation des deux chaînes
    concatenation = concatene_chaine(chaine1, chaine2)
    print("Concaténation des deux chaînes :", concatenation)
