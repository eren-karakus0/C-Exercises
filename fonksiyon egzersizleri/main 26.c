#include <stdio.h>
#include <stdlib.h>

void sekilciz(int kenar,char karakter)
{
	int i,j;
	
	for(j=kenar;j>0;j--)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("%c",karakter);
		}
		printf("\n");
	}
	for(j=1;j<=kenar;j++)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("%c",karakter);
		}
		printf("\n");
	}
}

int main() {
	
	int kenar;
	char karakter;
	
	printf("Basilacak karakteri giriniz: ");
	scanf("%c",&karakter);
	printf("Kenar sayisini giriniz: ");
	scanf("%d",&kenar);
	
	sekilciz(kenar,karakter);
	
	
	system("COLOR 2"); 
	return 0;
}
