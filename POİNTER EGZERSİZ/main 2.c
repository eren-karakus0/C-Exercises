#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int *sayi1,int *sayi2)
{
	int gecici;
	
	gecici=*sayi1;
	*sayi1=*sayi2;
	*sayi2=gecici;
	
	printf("Sayilarim yer degistirdikten sonra: \n");
	printf("Ilk sayim = %d\n",*sayi1);
	printf("Ikinci sayim = %d\n",*sayi2);
}
int main() {
	
	int sayi1,sayi2;
	
	printf("Lutfen iki sayi giriniz: \n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("Sayilarim yer degistirmeden once: \n");
	printf("Ilk sayim = %d\n",sayi1);
	printf("Ikinci sayim = %d\n",sayi2);
	
	yerdegistir(&sayi1,&sayi2);
	
	// fonksiyonu adres (&sayi) þeklinde gönderdiðimiz için sayýlarýn adreslerinin deðerleri deðiþiyor dolayýsýyla main içinde de 
	// yazsam fonksiyonun içinde de yazsam sayýlarýn yerleri deðiþmiþ olur.
	// fakat adres deðilde direkt (sayi1) gibi gönderirsem sadece fonksiyonun içinde yer deðiþimi oluyor.
	// eðer onu mainde bastýrmaya çalýþýrsam sayýlarýn yerleri deðiþmez sadece fonksiyonun içinde sayýlarýn yerleri deðiþir.
	
	system("COLOR 2"); 
	return 0;
}
