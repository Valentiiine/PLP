taille = int(input("Quelle est la taille de votre triangle ?"))

def triangle_rectangle(taille):

    if taille > 10:
        print ("La taille du triangle doit être inférieur à 10 pour avoir un triangle rectangle")
        return

    for i in range(1,taille+1):
        ligne=""
        if i==1 or i==taille:
            ligne+=i*"*"
        else:
            ligne="*"
            for j in range (1,i-1):
                ligne+="#"
            ligne+="*"
        print(ligne)
     
triangle_rectangle(taille)