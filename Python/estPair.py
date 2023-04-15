#!/bin/python3

########### Ce programme permet de tester si un nombre est paire
def estPaire(n):
    n = int(n)
    if n%2 == 0:
        print("le nombre ", n, " est paire")
    else:
        print("Le nombre ", n, "n'est pas paire")
        
 
############### Test
n = input("Donner un entier :\n")
print("\n")
estPaire(n)
