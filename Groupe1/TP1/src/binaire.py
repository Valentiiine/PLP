def afficher_binaire(n):
    # Si le nombre est négatif, on le convertit en positif pour l'affichage
    num = abs(n)
    binaire = ""

    # Utiliser une boucle for pour extraire les bits
    for i in range(num.bit_length()):  # bit_length() donne le nombre de bits nécessaires pour représenter le nombre
        binaire = str(num % 2) + binaire  # Ajoute le bit au début de la chaîne
        num //= 2  # Division entière par 2



    # Affichage de la représentation binaire
    print(f"Représentation binaire de {n} : {binaire}")

if __name__ == "__main__":
    # Saisie d'un nombre entier par l'utilisateur
    nombre = int(input("Entrez un nombre entier : "))

    # Appel de la fonction pour afficher la représentation binaire
    afficher_binaire(nombre)
