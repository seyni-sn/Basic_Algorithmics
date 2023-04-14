#include <stdio.h>
#include <stdlib.h>

//This is basic algorithm which computes the mean of given integers

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=0,n=0,s=0;
	double m=0;
	
	do
	{
		printf("Entrez un entier positif:\n");
		scanf("%d",&n);
		if(n!=-1)
		{
			s+=n;
			i++;
		}
	}while(n!=-1);//To stop enter -1

	m=((double)s)/((double)i);
	printf("la moyenne de ces %d entien vaut: %f\n",i,m);
	return 0;
}
