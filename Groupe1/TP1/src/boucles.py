# Demande à l'utilisateur d'entrer la taille du triangle et la stocke dans la variable 'taille'
taille = int(input("Quelle est la taille de votre triangle ?"))

# Définition de la fonction triangle_rectangle qui dessine un triangle rectangle avec la taille donnée
def triangle_rectangle(taille):

    # Vérification si la taille dépasse 10
    if taille > 10:
        # Si la taille est supérieure à 10, un message est affiché et la fonction s'arrête
        print ("La taille du triangle doit être inférieur à 10 pour avoir un triangle rectangle")
        return # Fin prématurée de la fonction

    # Boucle pour générer chaque ligne du triangle
    for i in range(1,taille+1): # La boucle parcourt chaque ligne de 1 jusqu'à 'taille'
        ligne=""    # Initialisation de la chaîne de caractères qui va représenter la ligne

        # Si on est sur la première ou la dernière ligne
        if i==1 or i==taille:

            # On remplit la ligne avec 'i' étoiles (une étoile par unité de hauteur)
            ligne+=i*"*"
        else:
            # Pour les lignes intermédiaires
            ligne="*" # On commence toujours par une étoile
            
            # Boucle pour insérer des '#' dans les positions intermédiaires
            
            for j in range (1,i-1): # Ajout de 'i-2' caractères '#' (dépend de la ligne actuelle)
                ligne+="#"
            
            # On termine la ligne avec une autre étoile
            ligne+="*"

        # Affichage de la ligne générée
        print(ligne)


# Appel de la fonction pour dessiner le triangle avec la taille fournie par l'utilisateur

triangle_rectangle(taille)