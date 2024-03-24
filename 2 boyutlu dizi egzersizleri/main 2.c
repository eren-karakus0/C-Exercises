#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j;
	int n;
	
	printf("Kaca kaclik bir carpim tablosu istersiniz: ");
	scanf("%d",&n);
	
	int dizi[n][n];
	
	printf(" I");
	for(i=1;i<=n;i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		printf("----");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			dizi[i][j]=i*j;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf(" %d",i);
		for(j=1;j<=n;j++)
		{
			printf("%4d",dizi[i][j]);
		}
		printf("\n");
	}
	
	system("COLOR 2"); 
	return 0;
}
