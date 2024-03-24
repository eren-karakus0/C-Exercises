#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int can[100],canan[100];
	int *sayi1,*sayi2;
	int n,m;
	int i;
	
	printf("Ilk dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	for(sayi1=can;sayi1<can+n;sayi1++)
	{
		printf("Eleman %d : ",sayi1-can);
		scanf("%d",sayi1);
	}
	printf("Ikinci dizinin eleman sayisini giriniz: ");
	scanf("%d",&m);
	for(sayi2=canan;sayi2<canan+m;sayi2++)
	{
		printf("Eleman %d : ",sayi2-canan);
		scanf("%d",sayi2);
	}
	
	printf("Ilk dizimiz: ");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(can+i));
	}
	printf("\nIkinci dizimiz: ");
	for(i=0;i<m;i++)
	{
		printf("%4d",*(canan+i));
	}
	printf("\nDizilerin birlestirilmis hali :");
	
	for(sayi1=can+n,sayi2=canan;sayi2<canan+m;sayi1++,sayi2++)
	{
		*sayi1=*sayi2;
	}
	for(i=0;i<n+m;i++)
	{
		printf("%4d",*(can+i));
	}
	
	system("COLOR 2"); 
	return 0;
}
