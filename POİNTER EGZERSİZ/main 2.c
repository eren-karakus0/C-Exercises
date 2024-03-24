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
	
	// fonksiyonu adres (&sayi) �eklinde g�nderdi�imiz i�in say�lar�n adreslerinin de�erleri de�i�iyor dolay�s�yla main i�inde de 
	// yazsam fonksiyonun i�inde de yazsam say�lar�n yerleri de�i�mi� olur.
	// fakat adres de�ilde direkt (sayi1) gibi g�nderirsem sadece fonksiyonun i�inde yer de�i�imi oluyor.
	// e�er onu mainde bast�rmaya �al���rsam say�lar�n yerleri de�i�mez sadece fonksiyonun i�inde say�lar�n yerleri de�i�ir.
	
	system("COLOR 2"); 
	return 0;
}
