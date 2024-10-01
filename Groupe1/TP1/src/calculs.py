import sys  # Importation du module sys (bien que ce module ne soit pas utilisé dans le code)

# Définition de la fonction `operateurs` qui prend trois arguments : num1, num2 et op (l'opérateur)
def operateurs(num1, num2, op):
    
    # Vérification si les deux nombres sont des entiers
    if type(num1) != type(int()) or type(num2) != type(int()):
        print("Veuillez rentrer des nombres entiers !")  # Message d'erreur si les valeurs ne sont pas des entiers

    # Si l'opérateur est l'addition
    elif op == "+":
        nb = num1 + num2  # Calcul de la somme
        # Affichage du résultat formaté
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est la soustraction
    elif op == "-":
        nb = num1 - num2  # Calcul de la différence
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est la multiplication
    elif op == "*":
        nb = num1 * num2  # Calcul du produit
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est la division
    elif op == "/":
        if num2 != 0:  # Vérification pour éviter la division par zéro
            nb = num1 / num2  # Calcul du quotient
            print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
        else:
            print("Attention à la division par 0")  # Message d'erreur en cas de division par zéro

    # Si l'opérateur est le modulo
    elif op == "%":
        nb = num1 % num2  # Calcul du reste de la division
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est l'opérateur bitwise AND
    elif op == "&":
        nb = num1 & num2  # Calcul du bitwise AND
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est l'opérateur bitwise OR
    elif op == "|":
        nb = num1 | num2  # Calcul du bitwise OR
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur est le complément bitwise (~)
    elif op == "~":
        nb = ~num1  # Calcul du complément bitwise du premier nombre
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")

    # Si l'opérateur saisi n'est pas reconnu
    else:
        print("Veuillez saisir un opérateur parmi : +, -, *, /, %, &, |, ~")  # Message d'erreur pour un opérateur invalide

# Appel de la fonction `operateurs` avec les arguments 1, 2, et l'opérateur "+"
operateurs(1, 2, "+")
