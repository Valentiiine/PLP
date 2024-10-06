# Fonction pour compter les occurrences d'une phrase dans une ligne
# Utilise la méthode count() pour compter combien de fois 'phrase' apparaît dans 'line'
def count_occurrences(line, phrase):
    return line.count(phrase)

def main():
    # Demander à l'utilisateur de saisir le nom du fichier à analyser
    filename = input("Entrez le nom du fichier : ")
    
    # Demander à l'utilisateur de saisir la phrase à rechercher dans le fichier
    phrase = input("Entrez la phrase que vous souhaitez rechercher : ")

    try:
        # Ouvrir le fichier en mode lecture ('r'), avec encodage UTF-8
        # Le bloc 'with' assure que le fichier sera fermé correctement après la lecture
        with open(filename, 'r', encoding='utf-8') as file:
            # Lire le fichier ligne par ligne à l'aide d'une boucle for
            # 'enumerate' est utilisé pour obtenir à la fois le numéro de ligne et le contenu de la ligne
            for line_number, line in enumerate(file, start=1):
                # Compter combien de fois la phrase apparaît dans la ligne
                occurrences = count_occurrences(line, phrase)
                # Si la phrase est présente au moins une fois dans la ligne, afficher les résultats
                if occurrences > 0:
                    print(f"Ligne {line_number}, {occurrences} fois")
    except FileNotFoundError:
        # Si le fichier n'est pas trouvé, afficher un message d'erreur
        print(f"Erreur : le fichier '{filename}' est introuvable.")

# Point d'entrée du programme
# Si ce script est exécuté directement (pas importé), appeler la fonction main()
if __name__ == "__main__":
    main()
