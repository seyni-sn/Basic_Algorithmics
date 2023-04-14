#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n1 = 0, n2 = 0, res = 0;
	char op=0;
	do
		{
			printf("Donner un operateur soit + - *:\n");
			scanf("%c", &op);
		}while(op != '+' && op != '-' && op !='*');
	
	if(op == '+')
		{
			printf("Donner 2 entier:\n");
			scanf("%d%d", &n1, &n2);
			res = n1 + n2;
			printf("La somme vaut: %d\n",res);
		}
	else if(op == '-')
		{
			printf("Donner 2 entier:\n");
			scanf("%d%d", &n1, &n2);
			res=abs(n1 - n2);
			printf("La difference vaut: %d\n",res);
		}
	else
		{
			printf("Donner 2 entier:\n");
			scanf("%d%d", &n1, &n2);
			res = n1 * n2;
			printf("Le prodiut vaut: %d\n", res);
		}
	return 0;
}
