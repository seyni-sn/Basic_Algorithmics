#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This is basic algorithm which test whether an given integer is a prime or not


int main(int argc, char *argv[]){
  int nb = 0, i =0;
  printf("Ce programme permet de dire si un nombre est premier !\n\n");
  do{
    printf("Donner un entier :\n");
    scanf("%d", &nb);
    printf("\n");
  }while(nb < 0);
  if(nb == 2){
    printf("Le nombre %d est premier\n", nb);
  }
  else{
    i = 2;
    //lensemble des diviseur de n se trouve entre 1 et racine carre de n
    //while (i < sqrt(nb) && nb%i != 0)
    while (i < (int)nb/2+1 && nb%i != 0) {
      i++;
    }
    //Pour caster un nombre (type)variable
    if(i == (int)nb/2 +1){
      printf("Le nombre %d est premier .\n", nb);
    }
    else{
      printf("Le nombre %d n'est pas premier .\n", nb);
    }
  }


  return 0;
}
