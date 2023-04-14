#include <stdio.h>
#include <stdlib.h>


//This is basic algorithm which display the multiplication table of a given integer


int main(int argc, char *argv[])
{
	int nb = 0;
	printf("Ce petit progamme permet d'affichage la table multiplication\nd'un nombre donner en entrée\n");
  	printf("Donner un nombre :\n");
  	scanf("%d", &nb);
  	if(nb < 0)
  	{
    		printf("Erreur - Valeur negitive!\n");
  	}
  	else
  	{
    		printf("La table de multiplication de %d\n", nb);
		for(int i = 1; i <= 10; i++)
		{
      			printf("%d\n", i * nb );
 	 	}

  	}

  return 0;
}
