#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char *ilk,*ikinci;
	char dizi[5][100];
	int i;
	char gecici;
	
	printf("5 Kelime giriniz: \n");
	for(i=0;i<5;i++)
	{
		printf("%d. Kelime: ",i);
		scanf("%s",&dizi[i]);
	}
	printf("Ters cevrilmis hali: \n");
	for(i=0;i<5;i++)
	{
		ilk=ikinci=dizi+i;
		while(*ikinci)
		{
			ikinci++;
		}
		ikinci--;
		while(ilk<ikinci)
		{
			gecici=*ilk;
			*ilk=*ikinci;
			*ikinci=gecici;
			ilk++;
			ikinci--;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",dizi+i);
	}
	
	
	system("COLOR 2"); 
	return 0;
}
