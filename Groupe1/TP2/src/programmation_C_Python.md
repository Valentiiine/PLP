Approches en Langage C et Python

1. Débogage
En C (avec gdb)
gdb (GNU Debugger) 

Permet de :
- Examiner le contenu des variables en temps réel
- Mettre des points d'arrêt (breakpoints)
- Suivre l'exécution ligne par ligne avec les commandes next ou step

Le débogage en C nécessite la compilation du programme avec l'option -g pour inclure des informations de débogage. Ensuite, le programme est exécuté dans gdb pour identifier et corriger les erreurs.

_Exemple de commande :_
```bash
gcc -g programme.c -o programme
gdb ./programme
```

En Python (avec pdb)
pdb (Python Debugger)

Permet de :
- De placer des points d'arrêt avec la fonction pdb.set_trace(),
- D'examiner les variables et de suivre l'exécution ligne par ligne,
- De naviguer dans la pile d'appels.

Le débogage en Python est plus souple et ne nécessite pas de recompilation. On peut insérer des points d'arrêt directement dans le code source, puis exécuter le script en mode débogage.

_Exemple de commande :_
```bash
python -m pdb programme.py
```

# ==== Comparaison ==== # 
C : Nécessite une recompilation avec -g, plus formel avec l'outil gdb.
Python : Intégration plus fluide avec pdb, aucune recompilation nécessaire, débogage interactif.


2. Chaîne de Compilation**
En C (avec gcc)

- Préprocesseur (gcc -E) : Cette étape traite les directives comme #include et #define.

- Compilation (gcc -S) : Le code source est traduit en assembleur.

- Assemblage (gcc -c) : L'assembleur convertit le code en fichiers objets (.o).

- Édition des liens (gcc) : Les fichiers objets sont liés pour créer un exécutable final.

+ Execution 

En Python (gestion des modules)
Pas de chaîne de compilation explicite : Bytecode

Les modules sont chargés dynamiquement à l'exécution.
Python compile automatiquement les fichiers .py en bytecode .pyc dans le répertoire __pycache__ pour une exécution plus rapide lors des futures exécutions.

Instruction du BYTECODE : 
- LOAD_GLOBAL : Cette instruction charge une variable globale (ici math.pi).
- LOAD_ATTR : Cela accède à un attribut (ex : pi du module math) donc la valeur de cet attribut est chargé dans la pile.
- LOAD_FAST : Charge une variable locale, comme rayon.
- BINARY_MULTIPLY : Effectue une multiplication binaire entre deux éléments du sommet de la pile.
- RETURN_VALUE : Cette instruction renvoie le résultat de l expression pi * rayon^2 (l aire d un cercle) en tant que valeur de retour de la fonction.

# ==== Comparaison ==== #
C : Chaîne de compilation complexe, avec plusieurs étapes distinctes avant de produire un exécutable.
Python : Interprétation dynamique, avec une gestion automatique des modules sans étapes manuelles de compilation.


3. Inspection de Code
En C
L'inspection du code compilé en C peut se faire avec des outils comme :

objdump : Pour examiner le code machine généré.
nm : Pour afficher la table des symboles d'un fichier objet.

En Python (avec dis)
dis est un module Python qui désassemble le bytecode Python et permet d'examiner le code généré après la compilation en bytecode. Il permet de mieux comprendre l'exécution d'un programme Python au niveau du bytecode.

_Exemple :_
```python
import dis
def exemple():
    return 42
dis.dis(exemple)
```

# === Comparaison : === #
C : L'inspection se fait au niveau du code machine, ce qui nécessite une compréhension de l'assembleur.
Python : Le bytecode est plus accessible, et dis permet d'explorer facilement le code sous-jacent.


4. Manipulation de Chaînes de Caractères
En C
La manipulation des chaînes se fait à l'aide de fonctions de la bibliothèque standard (strlen, strcpy, strcat, etc.). 
/!\ Les chaînes de caractères sont des tableaux de char, ce qui impose une gestion manuelle de la mémoire.

_Exemple :_
```c
char str1[50] = "Bonjour";
char str2[50] = " Monde!";
strcat(str1, str2); // str1 contient maintenant "Bonjour Monde!"
```

En Python
La manipulation des chaînes est beaucoup plus simple avec des méthodes intégrées comme .join(), .split(), .replace(), etc.

Les f-strings (formatage) permettent de construire des chaînes de manière plus lisible.

_Exemple :_
```python
Copier le code
str1 = "Bonjour"
str2 = "Monde"
print(f"{str1} {str2}!")
```

# === Comparaison === #
C : Gestion manuelle des chaînes, manipulation plus complexe et nécessitant plus de précautions.
Python : Manipulation des chaînes plus intuitive et puissante, sans gestion manuelle de la mémoire.


5. Gestion des Données et Recherche dans les Fichiers
En C (avec struct pour les données)
Structures (struct) =  gérer des données complexes (informations d'étudiants).

La recherche dans un fichier se fait avec des fonctions comme : 
fopen, fgets
/!\ Nécessite de parcourir manuellement les lignes.

_Exemple :_
```c
struct Etudiant {
    char nom[50];
    int age;
    char adresse[100];
};
```

En Python (avec les classes)
Classes = Organiser les données (similaire aux structures en C), mais avec plus de flexibilité.

La recherche dans un fichier est plus simple avec des méthodes comme .readlines() et des constructions Python comme les list comprehensions.

_Exemple :_
```python
Copier le code
class Etudiant:
    def __init__(self, nom, age, adresse):
        self.nom = nom
        self.age = age
        self.adresse = adresse
```

# === Comparaison === #
C : Gestion des structures plus formelle, mais moins flexible.
Python : Les classes offrent plus de flexibilité et permettent des méthodes associées, simplifiant la gestion des données et des recherches dans les fichiers.


En bref :
CC met l'accent sur la gestion des ressources, mais au prix d'une plus grande complexité. 
Python est plus simple à utiliser mais au détriment d'une gestion précise des performances et de la mémoire.
