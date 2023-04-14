
#include <stdio.h>
#include <stdlib.h>

//This is basic algorithm which test whether an given integer is even or odd

int main(int argc, char const *argv[]) {
  int nb = 0;
  printf("Ce programme permet de tester si un nombre est paire !\n\n");
  do {
    printf("Donner un entier :\n");
    scanf("%d", &nb);
  } while(nb < 0 );
  if (nb % 2 == 0){
    printf("Le nombre %d est paire\n", nb);
  }
  else{
    printf("Le nombre %d n'est pas paire\n", nb);
  }
  return 0;
}
