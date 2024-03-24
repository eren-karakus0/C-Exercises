#include <stdio.h>
#include <stdlib.h>

void ucgenc(int n)
{
	int i;
	int j;
	int bosluksayisi=n-1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=bosluksayisi;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("c");
		}
		bosluksayisi--;
		printf("\n");	
	}
}
void ucgen(int n)
{
	int i,j;
	int bosluksayisi=1;
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=bosluksayisi;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("+");
		}
		bosluksayisi++;
		printf("\n");
	}
}



int main() {
	
	int satir;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);
	ucgenc(satir);
	ucgen(satir);
		
	system("COLOR 2"); 
	return 0;
}
