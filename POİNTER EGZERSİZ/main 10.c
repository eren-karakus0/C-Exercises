#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
	
	char dizi[MAX];
	char eleme;
	char *can;
	
	printf("Bir karakter dizisi giriniz: ");
	gets(dizi);
	
	printf("Karakter dizisinden cikarmak istediginiz karakter nedir: ");
	scanf("%c",&eleme);
	
	can=dizi;
	
	while(*can)
	{
		if(*can==eleme)
		{
			strcpy(can,can+1);
		}
		else
		{
			can++;
		}
	}
	/*
	for hali
	for(can=dizi;*can;can++)
	{
		if(*can==eleme)
		{
			strcpy(can,can+1);
		}
	}
	*/
	printf("Eleme yapildiktan sonra karakter dizisi: %s",dizi);
	
	system("COLOR 2"); 
	return 0;
}
