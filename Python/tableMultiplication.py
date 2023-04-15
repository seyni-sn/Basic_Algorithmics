#!/bin/python3
def tableMultiplication():
    nb = input("Donner un nombre: ")
    print("\n")
    nb = int(nb)# Conversion en entier
    i = 0
    if nb < 0:
        print("Erreur - Valeur negative!\n")
    else:
        print("La table de multiplication de ", nb)
        print("\n")
        for i in range(1,11):
            print(i * nb)
            


tableMultiplication()
