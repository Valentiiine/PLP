1. Base de la programmation

En python:

    Utilise print() qui est beaucoup plus flexible. Il n'est pas nécessaire de spécifier le type de la variable et les conversions de types sont gérées automatiquement.

Exemple:
    
```C
nombre = 28
print(f"Le nombre est : {nombre}")
```

en C : 

    Utilise printf pour afficher des données. Il faut indiquer explicitement le type de la donnée à afficher (par exemple, %d pour un entier, %f pour un nombre flottant).
    
Exemple:

```C
#include <stdio.h>

int main() {
    int nombre = 28;
    printf("Le nombre est : %d\n", nombre);
    return 0;
}
```

2. **Manipulation des variables**

En python:

    Le typage est dynamique, ce qui signifie que les variables n'ont pas besoin d'être explicitement déclarées avec un type lors de leur création. Le type est déterminé en fonction de la valeur assignée.

Exemple:

```C
nombre = 10      # int
pi = 3.14        # float
```

en C :
    
    Les types des variables doivent être explicitement déclarés (typage statique). La tentative d'assigner une valeur de type incorrect génère une erreur de compilation.

Exemple:

```C
int nombre = 10;
float pi = 3.14;
```

3. **Opérateurs**

Les deux langages partagent les opérateurs de base : +, -, *, /, %.

Exemples: en C :

```C
int a = 5 + 3; // C
```            
en Python :

```Python
a = 5 + 3   
```
En C:
    
    Les opérateurs logiques sont && (ET), || (OU), ! (NON). En Python, ce sont des mots-clés : and, or, not.

Exemple:

```C
if (a && b) { /* C */ }
```

Exemple en python:
            
```Python
if a and b:   
```


4. **Boucles et structures de contrôle**

En C :
    Utilise des accolades {} pour définir les blocs de code.

```C
for (int i = 0; i < 10; i++) {
printf("%d ", i);
}
```

Python : Utilise l'indentation pour délimiter les blocs de code. 

*Avantage* : structure visuellement plus claire 

*Inconvénient* : exige une bonne gestion des indentations.

```Python
for i in range(10):
    print(i)
```

5. **Conversion et formatage**

En C : Utilisation des spécificateurs dans printf pour formater les chaînes.

```C
int age = 25;
printf("J'ai %d ans.\n", age);
```

En Python : Utilisation des f-strings ou la méthode format() pour le formatage de chaînes.

```Python
age = 25
print(f"J'ai {age} ans.")
```



## CONCLUSION

Le langage C offre un contrôle plus bas niveau sur la gestion de la mémoire et les types de données, tandis que Python se concentre sur la simplicité et l'abstraction. C nécessite une gestion explicite des types et de la mémoire, tandis que Python facilite le développement rapide en automatisant ces aspects.






