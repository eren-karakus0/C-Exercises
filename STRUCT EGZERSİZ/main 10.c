#include <stdio.h>
#include <stdlib.h>
#define N 4

typedef struct{
	char ilac_adi[10];
	int adet;
	int fiyat;
}data;

int main() {
	
	data veriler[N];
	int i;
	
	for(i=0;i<N;i++)
	{
		fflush(stdin);//scanf hatas� al�n�rsa kullan�labilir fordan sonra belle�i temizliyor baz� durumlarda gerekebilir
		printf("Lutfen ilac adini giriniz: ");
		scanf("%s",&veriler[i].ilac_adi);
		
		printf("Lutfen ilac adedini giriniz: ");
		scanf("%d",&veriler[i].adet);
		
		printf("Lutfen ilac fiyatini giriniz: ");
		scanf("%d",&veriler[i].fiyat);
	}
	printf("ILAC ADI\n");
	printf("=============\n");
	
	for(i=0;i<N;i++)
	{
		if(veriler[i].adet<=20)
		{
			printf("%s\n",veriler[i].ilac_adi);
		}	
	}
	
	system("COLOR 2");
	return 0;
}
