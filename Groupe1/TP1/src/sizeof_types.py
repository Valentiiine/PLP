import sys

# Affichage des tailles pour les types de base
print(f"Taille de char: {sys.getsizeof('a')} octets")
print(f"Taille de int: {sys.getsizeof(1)} octets")
print(f"Taille de float: {sys.getsizeof(1.0)} octets")
print(f"Taille de bool: {sys.getsizeof(True)} octets")
print(f"Taille de str (chaîne vide): {sys.getsizeof('')} octets")
print(f"Taille de list (liste vide): {sys.getsizeof([])} octets")
print(f"Taille de dict (dictionnaire vide): {sys.getsizeof({})} octets")

# Si on veut des valeurs proches des types signés/unsigned en C :
print(f"Taille de signed int: {sys.getsizeof(int())} octets")
print(f"Taille de long int: {sys.getsizeof(1 << 62)} octets")
print(f"Taille de long long int: {sys.getsizeof(1 << 100)} octets")