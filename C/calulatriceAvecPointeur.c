#include <stdio.h>
#include <stdlib.h>
int calculatrice(int,char,int);

//This is basic calculator using pointers

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int nbr1 = 0, nbr2 = 0;
	double result = 0;
	char op = 0;
	result = calculatrice(nbr1, op, nbr2);
	printf("le resultat est %lf\n", result);
	return 0;
}
int calculatrice(int nbr1, char op, int nbr2)
{
	int compt = 0;
	double res = 0;
	char *p;
	p=(char*)malloc(3*sizeof(char));
	do
	{
		printf("Donner le premier operant ensuite l'operateur et apres le deuxieme operant:\n");
	    	gets(p);
	    	compt=sscanf(p, "%d %c %d", &nbr1, &op, &nbr2);
	}while(compt<3);
	switch(op)
	{
		case '+': res = nbr1 + nbr2;
		break;
		case'-': res = nbr1 - nbr2;
		break;
		case'*': res = nbr1 * nbr2;
		break;
		case'/': if(nbr2 == 0) { printf("Division impossible!\n");}
		         else{res=nbr1/nbr2;} 
		break;
		default: printf("Desoler loperateur que vous aves entre n'est pas correct veuillez saisir en saisir une autre SVP\n");
		break;
	}
	return res;
	
}
