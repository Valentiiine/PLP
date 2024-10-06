# Définition de la classe Étudiant
class Etudiant:
    def __init__(self, nom, prenom, adresse, notes):
        self.nom = nom  #Créé le nom,prénom,adresse,notes
        self.prenom = prenom
        self.adresse = adresse
        self.notes = notes
    
    def afficher_etudiant(self): # Définition de la fonction pour afficher les étudiants
        print(f"Nom : {self.nom}")#Print le nom, prénom, adresse, notes 
        print(f"Prénom : {self.prenom}")
        print(f"Adresse : {self.adresse}")
        for i, note in enumerate(self.notes, 1):
            print(f"Note {i} : {note:.2f}")
        print()


etudiants = []  # Création du dictionnaire "étudiants"
    
# Saisie des informations pour chaque étudiant
for i in range(5):  #Boucle for pour les 5 étudiants
    print(f"Étudiant.e {i + 1} :") #Affiche du N° de l'étudiants
    nom = input("Nom : ")  #Demande à l'utilisateurs de rentrer le nom
    prenom = input("Prénom : ") 
    adresse = input("Adresse : ")
    notes = []
    for j in range(2):  # Pour les deux notes de l'étudiant
        note = float(input(f"Note {j + 1} : "))
        notes.append(note)
    etudiants.append(Etudiant(nom, prenom, adresse, notes)) #Ajout des information dans le dictionaire
    
    
# Affichage des informations des étudiants
for i, etudiant in enumerate(etudiants, 1): #Boucle pour afficher chaque étudiant
    print(f"Étudiant.e {i} :") #Affichage du n° d'étudiant
    etudiant.afficher_etudiant() #Appel la fonction défini dans la class