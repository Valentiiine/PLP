import math   # Importation du module math pour accéder à des fonctions mathématiques comme 'pi'

# Demande du rayon à l'utilisateur
rayon = float(input("Entrez le rayon du cercle: "))  
# Demande à l'utilisateur d'entrer une valeur pour le rayon du cercle
# La valeur saisie est convertie en flottant (float) et stockée dans la variable 'rayon'

# Calcul de l'aire et du périmètre
aire = math.pi * rayon * rayon  
# Calcul de l'aire du cercle avec la formule: π * rayon²
# 'math.pi' fournit la valeur de pi depuis le module math

perimetre = 2 * math.pi * rayon  
# Calcul du périmètre du cercle avec la formule: 2 * π * rayon

# Affichage des résultats
print(f"L'aire du cercle est: {aire:.2f}")  
# Affiche l'aire du cercle avec deux décimales
# Le f-string permet d'insérer directement des variables dans la chaîne de caractères

print(f"Le périmètre du cercle est: {perimetre:.2f}")  
# Affiche le périmètre du cercle avec deux décimales, également en utilisant un f-string
