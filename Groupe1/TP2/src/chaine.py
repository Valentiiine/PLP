# Fonction pour calculer la longueur d'une chaîne de caractères
def longueur_chaine(chaine):
    longueur = 0  # Initialisation de la variable longueur à 0
    # Parcourir chaque caractère dans la chaîne
    for caractere in chaine:
        longueur += 1  # Incrémenter la longueur pour chaque caractère
    return longueur  # Retourner la longueur totale

# Fonction pour copier une chaîne de caractères dans une autre
def copie_chaine(source):
    destination = ''  # Initialisation de la chaîne vide qui recevra la copie
    # Parcourir chaque caractère de la chaîne source
    for caractere in source:
        destination += caractere  # Ajouter chaque caractère à la chaîne destination
    return destination  # Retourner la chaîne copiée

# Fonction pour concaténer deux chaînes de caractères
def concatene_chaine(source1, source2):
    resultat = ''  # Initialisation de la chaîne résultat vide
    
    # Copier la première chaîne dans la chaîne résultat
    for caractere in source1:
        resultat += caractere  # Ajouter chaque caractère de source1 dans resultat
    
    # Ajouter la deuxième chaîne à la fin de la première
    for caractere in source2:
        resultat += caractere  # Ajouter chaque caractère de source2 dans resultat
    
    return resultat  # Retourner la chaîne concaténée

if __name__ == "__main__":  # Le point d'entrée du programme
    # Demander à l'utilisateur de saisir deux chaînes
    chaine1 = input("Entrez la première chaîne : ")  # Saisie de la première chaîne
    chaine2 = input("Entrez la deuxième chaîne : ")  # Saisie de la deuxième chaîne

    # Calcul et affichage de la longueur des chaînes
    print("Longueur de la première chaîne :", longueur_chaine(chaine1))  # Afficher la longueur de chaine1
    print("Longueur de la deuxième chaîne :", longueur_chaine(chaine2))  # Afficher la longueur de chaine2

    # Copie de la première chaîne et affichage
    copie = copie_chaine(chaine1)  # appel de la fonction "copie_chaine" pour copier la chaine1 donc le resultat sera stocké dans la variable "copie"
    print("Copie de la première chaîne :", copie)  # Affichage du résultat de la copie

    # Concaténation des deux chaînes et affichage
    concatenation = concatene_chaine(chaine1, chaine2)  # appel de la fonction "concatene_chaine" pour Concaténer les deux chaînes donc le resultat sera stocké dans la variable "concatenation"
    print("Concaténation des deux chaînes :", concatenation)  # Affichage du résultat de la concaténation
