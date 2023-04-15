#!/bin/python3

########## Ce programme permet de donner le maximum de trois nombres
def maximum(a, b, c):
    a = int(a)
    b = int(b)
    c = int(c)
    Max = a
    if(b > Max):
        Max = b
    if(c > Max):
        Max = c
    print("Le maximum est ", Max)
    
####### Test
a = input("Donner le premier nombre :\n")
b = input("Donner le deuxieme nombre :\n")
c = input("Donner le troisieme nombre :\n")
print("")
maximum(a, b, c)
