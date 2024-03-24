#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main() {
	
	char dizi[MAX]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
	char *karakter1;
	char *karakter2;
	char dizi_kopya[MAX];
	int i;
	
	karakter2=dizi_kopya;
	
	for(karakter1=dizi;karakter1<dizi+MAX;karakter1++)
	{
		*karakter2=*karakter1;
		karakter2++;
	}
	printf("Original dizi: ");
	for(i=0;i<MAX;i++)
	{
		printf("%3c",*(dizi+i));
	}
	printf("\nKopyalanmis dizi: ");
	for(i=0;i<MAX;i++)
	{
		printf("%3c",*(dizi_kopya+i));
	}
	
	system("COLOR 2"); 
	return 0;
}
