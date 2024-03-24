#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//Kullanýcýdan 2 adet 3 e 2 lik maris deðerlerini alýnýz bunlarý bir 3 boyutlu sayý dizisine
	//atayýnýz hangi indexte hangi deðer var bunlarý consola bastýrýnýz.
	
	
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
