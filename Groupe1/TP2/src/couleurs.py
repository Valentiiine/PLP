import random

class Couleur:
    def __init__(self, R, G, B, A):
        self.R = R  #Rouge
        self.G = G  #Verte
        self.B = B  #Bleue
        self.A = A  #Alpha

    def __eq__(self, other):
        # Comparer deux couleur
        return (self.R, self.G, self.B, self.A) == (other.R, other.G, other.B, other.A)

    def __repr__(self):
        # Représentation sous forme de chaîne pour afficher la couleur en décimal
        return f"couleurs r,g,b {self.R} {self.G} {self.B} {self.A}"


# Génération d'une liste de 100 couleurs aléatoires
tableau_couleurs = [Couleur(random.randint(0, 255), random.randint(0, 255), random.randint(0, 255), 255) for i in range(100)]

# Liste pour stocker les couleurs distinctes et leur nombre d'occurrences
occurrences_couleurs = []

# Parcourir la liste de couleurs et compter les occurrences
for couleur in tableau_couleurs:
    found = False  # Indicateur pour savoir si la couleur a été trouvée

    # Vérifier si la couleur est déjà dans la liste des couleurs distinctes
    for item in occurrences_couleurs:
        if item[0] == couleur:  # Comparer les couleurs
            item[1] += 1  # Incrémenter le compteur
            found = True  # La couleur a été trouvée
            
    # Si la couleur n'a pas été trouvée après la boucle
    if not found:
        occurrences_couleurs.append([couleur, 1])

# Affiche les couleurs distinctes et leur nombre d'occurrences en décimal
for couleur, occurrences in occurrences_couleurs:
    print(f"{couleur} : {occurrences}")
