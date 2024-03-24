#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int sayi = 9/4;
	// int olduðu için 2 diye yazar.
	printf("%d",sayi);
	*/
	/*
	float sayi = 2.25;
	// burada 2.25 yansýtýlýr ama 974 yazýnca integer/integer gibi algýlanýyor ve sonuç ta integer oluyor
	printf("%f",sayi);
	*/
	/*
	float sayi = 9/4;
	// burada 2 olarak yazdýrýlýyor bunu önlemek için de casting kullanýrýz.
	printf("%f",sayi);
	*/
	float sayi = (float)9/4;
	// burada gerçek sonuca ulaþýyoruz kýsaca kastediyoruz
	printf("%.2f",sayi);	
	
	
	return 0;
}
