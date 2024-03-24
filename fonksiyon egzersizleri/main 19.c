#include <stdio.h>
#include <stdlib.h>

void sirala(int A[],int adet)
{
	int i,j,gecici;
	for(i=0;i<adet-1;i++)
	{
		for(j=0;j<adet-1;j++)
		{
			if(A[j] > A[j+1])
			{
				gecici=A[j];
				A[j]=A[j+1];
				A[j+1]=gecici;
			}
		}
	}
}
int main() {
	
	int n;
	int i;
	int dizi[100];
	
	printf("kac tane sayi uretilsin: ");
	scanf("%d",&n);
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("Dizinin sirali hali:");
	sirala(dizi,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	
	system("COLOR 2"); 
	return 0;
}
