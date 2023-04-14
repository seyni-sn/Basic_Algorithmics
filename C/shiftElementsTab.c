#include <stdio.h>
#include <stdlib.h>

#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//This is an basic program shift each element of an array by 2 index

int main(int argc, char *argv[]) 
{
	int tab0[N] = {0}, tab1[N] = {0}, i = 0, k = 0, nbre = 0;
	
	printf("Vous allez remplire un tableau de 5 entieer.\n");

	for (i = 0; i < N; ++i)
	{
		printf("Donner l'entier numero %d:\n",i+1);
		scanf("%d", &tab0[i]);
	}

	for (i = 0; i < N; ++i)
	{
		tab1[i] = tab0[i];
	}

	for (i = 0; i < N; ++i)
	{
		k = (i+2) % (N);
		tab0[k] = tab1[i];
	}
	
	printf("\n\n\n");

	for (i = 0; i < N; ++i)
	{
		printf("%d\n", tab0[i]);
	}
	
	
	return 0;
}
