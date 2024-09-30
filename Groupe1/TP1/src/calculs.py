import sys


def operateurs(num1,num2,op):
    if type(num1)!=type(int()) or type(num2)!=type(int()):
        print("Veuillez rentrer des nombres entiers !")

    elif op=="+":
        nb=num1+num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="-":
        nb=num1-num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="*":
        nb=num1*num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="/":
        if num2!=0:
            nb=num1/num2
            print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
        else:
            print("Attention à la division par 0")
    elif op=="%":
        nb=num1%num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="&":
        nb=num1 & num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="|":
        nb=num1 | num2
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    elif op=="~":
        nb= ~num1 
        print(f"L'opération avec pour premier nombre: {num1} et second nombre: {num2} ayant pour opérateur {op} est égal à {nb}")
    else:
        print("Veuillez saisir un opérateur parmis : +, -, *, /, %, &, |, ~")


operateurs(1,2,"+")