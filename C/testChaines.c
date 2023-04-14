#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char chaine1[N] = {0}, chaine2[N] = {0};
	int i = 0, j = 0, result = 0, taille = 0;
	int test = 0;
	
	printf("Donneer la premiere chaine:\n");
	gets(chaine1);

	printf("Donneer la deuxieme chaine:\n");
	gets(chaine2);

	taille = strlen(chaine1);

	do
	{
		if (chaine1[i] == chaine2[i])
		{
				test = 0;
				i++;
		}
		else
		{
			test = 1;
			
			if (chaine1[i] > chaine2[i])
			{
				result = 1;
			}

			else
			{
				result = -1;
			}
		}

	} while (test == 0 && i != taille);

	printf("  %d\n", result);
	return 0;
}
