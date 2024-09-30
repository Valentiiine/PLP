# Définition de la classe Étudiant
class Etudiant:
    def __init__(self, nom, prenom, adresse, notes):
        self.nom = nom
        self.prenom = prenom
        self.adresse = adresse
        self.notes = notes
    
    def afficher_etudiant(self):
        print(f"Nom : {self.nom}")
        print(f"Prénom : {self.prenom}")
        print(f"Adresse : {self.adresse}")
        for i, note in enumerate(self.notes, 1):
            print(f"Note {i} : {note:.2f}")
        print()

if __name__ == "__main__":
    etudiants = []
    
    # Saisie des informations pour chaque étudiant
    for i in range(5):
        print(f"Étudiant.e {i + 1} :")
        nom = input("Nom : ")
        prenom = input("Prénom : ")
        adresse = input("Adresse : ")
        notes = []
        for j in range(2):  # On suppose que chaque étudiant a 2 notes
            note = float(input(f"Note {j + 1} : "))
            notes.append(note)
        etudiants.append(Etudiant(nom, prenom, adresse, notes))
        print()
    
    # Affichage des informations des étudiants
    for i, etudiant in enumerate(etudiants, 1):
        print(f"Étudiant.e {i} :")
        etudiant.afficher_etudiant()
