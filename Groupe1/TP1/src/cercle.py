import math

# Demande du rayon à l'utilisateur
rayon = float(input("Entrez le rayon du cercle: "))

# Calcul de l'aire et du périmètre
aire = math.pi * rayon * rayon
perimetre = 2 * math.pi * rayon

# Affichage des résultats
print(f"L'aire du cercle est: {aire:.2f}")
print(f"Le périmètre du cercle est: {perimetre:.2f}")