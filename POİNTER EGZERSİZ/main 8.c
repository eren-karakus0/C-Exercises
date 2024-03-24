#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
	
	int can[MAX];
	int *sayi1,*sayi2;
	int n;
	
	printf("Lutfen eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	for(sayi1=can;sayi1<can+n;sayi1++)
	{
		scanf("%d",sayi1);
	}
	printf("Dizimizin ilk hali: ");
	for(sayi1=can;sayi1<can+n;sayi1++)
	{
		printf("%3d",*sayi1);
	}
	printf("\n");
	printf("Dizimizin son hali: ");
	for(sayi2=can+n-1;sayi2>=can;sayi2--)
	{
		printf("%3d",*sayi2);
	}
	
	
	system("COLOR 2"); 
	return 0;
}
