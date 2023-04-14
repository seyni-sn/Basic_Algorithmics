#include <stdio.h>
#include <stdlib.h>
#define N 10

//void initiliser(int**, int);
//int somme(int**, int);

//This is a basic program which calculate the sum of an two dimensional integer array

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initialiser(int t[][N], int n);
int somme(int t[][N], int n);

int main(int argc, char *argv[])
{
	int tab[N][N], s = 0;
	initialiser(tab, N);
	s = somme(tab, N);
	printf("La somme du tableau est: %d\n", s);
	return 0;
}

void initialiser(int t[][N], int n)
{
 	int i = 0,j = 0 ,k = 0;
 	for(i = 0; i < n; i++)
 	{
 		for(j = 0; j < n; j++)
 		{
  			t[i][j] = k;
  			k++;
 		}
 	}
 	
}

int somme(int t[][N],	int n)
{
	int i = 0, j = 0, s = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
     		{
     			s += t[i][j];
		}
	}
     	
	return s;
}
