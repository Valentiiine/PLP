#Fonction qui ajoute dans une liste les chiffres divisibles par 4 mais pas par 6
def division1():
    nb=[] 
    for i in range (1,1000+1):
        if i%4==0 and i%6!=0:
            nb.append(i)
        else:
            continue
    print(nb)
    return 

#Fonction qui ajoute dans une liste les chiffres paires et divisibles par 8
def division2():
    nb=[]
    for i in range (1,1000+1):
        if i%2==0 and i%8==0:
            nb.append(i)
        else:
            continue
    print(nb)
    return 

#Fonction qui ajoute dans une liste les chiffres divisibles par 5 ou 7 mais pas par 10
def division3():
    nb=[]
    for i in range (1,1000+1):
        if (i%5==0 or i%7==0) and i%10!=0:
            nb.append(i)
        else:
            continue
    print(nb)
    return 

print("Les chiffres divisibles par 4 mais pas par 6 sont : ", division1())
print("Les chiffres paires et divisibles par 8 : ", division2())
print("Les chiffres divisibles par 5 ou 7 mais pas par 10 sont : ", division3())