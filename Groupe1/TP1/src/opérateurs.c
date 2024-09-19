#include <stdio.h>

int main(){

    int a = 16;
    int b = 3;

    //Addition
    printf("Addition (a+b) = %d\n", a+b);

    //Soustraction
    printf("Soustraction (a-b) = %d\n", a-b);

    //Multiplication
    printf("Multiplication (axb) = %d\n", a*b);

    //Division
    printf("Division (a/b) = %.2f\n", (float)a/b);

    //Division eucidienne
    printf("Division euclidienne (a/b) = %d\n", a%b);

    //Egalité
    printf("Egalité (a=b) = %s\n", (a==b)? "True":"False");

    //Supériorité
    printf("a supérieur à b (a>b) = %s\n", (a>b)? "True":"False");

}