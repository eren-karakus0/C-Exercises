#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//Kullan�c�dan 2 adet 3 e 2 lik maris de�erlerini al�n�z bunlar� bir 3 boyutlu say� dizisine
	//atay�n�z hangi indexte hangi de�er var bunlar� consola bast�r�n�z.
	
	
	int can[2][3][2];
	int i,j,k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&can[i][j][k]);
			}
		}
	}
	printf("Girdiginiz degerler \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("can[%d][%d][%d] = %d \n",i,j,k,can[i][j][k]);
			}
		}
	}
	
	return 0;
}
