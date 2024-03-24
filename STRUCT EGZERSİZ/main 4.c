#include <stdio.h>
#include <stdlib.h>

typedef struct adresDefteri{
	char ad[100];
	char soyad[100];
	char tel[10];
	char adre[200];
	char postakodu[6];
}defter;

int main() {
	
	int n;
	int i;
	char satir;
	
	printf("Kac kisinin bilgisini tutmak istiyorsunuz: ");
	scanf("%d",&n);
	defter adres[n];
	scanf("%c",&satir);
	
	for(i=0;i<n;i++)
	{
		printf("Lutfen isim giriniz: ");
		gets(adres[i].ad);
		
		printf("Lutfen soyisim giriniz: ");
		gets(adres[i].soyad);
		
		printf("Lutfen telefon numarasini giriniz: ");
		gets(adres[i].tel);
		
		printf("Lutfen adresinizi giriniz: ");
		gets(adres[i].adre);
		
		printf("Lutfen posta kodunu giriniz: ");
		gets(adres[i].postakodu);
	}
	for(i=0;i<n;i++)
	{
		printf("Isim: %s\n",adres[i].ad);
		printf("Soyisim: %s\n",adres[i].soyad);
		printf("Tel no: %s\n",adres[i].tel);
		printf("Adres: %s\n",adres[i].adre);
		printf("Posta kodu: %s\n",adres[i].postakodu);
	}
	
	system("COLOR 2"); 
	return 0;
}
