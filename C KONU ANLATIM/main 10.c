#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int sayi = 9/4;
	// int oldu�u i�in 2 diye yazar.
	printf("%d",sayi);
	*/
	/*
	float sayi = 2.25;
	// burada 2.25 yans�t�l�r ama 974 yaz�nca integer/integer gibi alg�lan�yor ve sonu� ta integer oluyor
	printf("%f",sayi);
	*/
	/*
	float sayi = 9/4;
	// burada 2 olarak yazd�r�l�yor bunu �nlemek i�in de casting kullan�r�z.
	printf("%f",sayi);
	*/
	float sayi = (float)9/4;
	// burada ger�ek sonuca ula��yoruz k�saca kastediyoruz
	printf("%.2f",sayi);	
	
	
	return 0;
}
