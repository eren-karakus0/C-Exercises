#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define VARMI
#define SAYI 5
#define POWER 1
int main() {
	
	// include k�t�phane eklemek i�in kullan�l�r
	// define de�er tan�mlamak i�in kullan�l�r pi say�s� gibi say� olmak zorunda de�ildir
	// fonksiyon tipinde makrolarda da define kullan�l�r i�indeki i�lemi yapar || circleArea(r) (PI*r*r) gibi
	// undef define deki de�eri kald�rmak i�in kullan�l�r define dan sonra kullan�ld���nda de�eri direkt siler
	// ifdef kullan�m�nda ifdef i�erisindeki ifade ile kullan�l�r ifade tan�mlanmam��sa u�ramadan ge�er
	// else durumunda da ifdef i�indeki ifade macro tan�mlanmam���sa else ye ge�er ve oradan devam eder
	/*
	#ifdef PI
	//code
	#endif
	
	#ifdef PII // burada PII tan�mlanmad��� i�in #else i�i �al���r
	//do�ru kod
	#else
	//else code
	#endif
	
	// �rnek
	
	#ifdef PII
	printf("C harika gidiyor.");
	#else
	printf("C muthis gidiyor.");
	#endif
	
	
	int sayi;
	
	#ifdef VARMIo
	sayi=2;
	#else
	printf("Lutfen bir deger giriniz. ");
	scanf("%d",sayi);
	#endif
	
	printf("sayi degeri: %d",sayi);
	
	
	// #if#else kullan�m�
	
	#if(SAYI==6)
	printf("sayimiz: %d",SAYI);
	#else
	printf("Sayimiz 5 ten farklidir.");
	#endif
	*/
	
	// #error kullan�m�
	// hata f�rlatma 
	#if !defined POWER || POWER<2
	#error POWER tanimlanmadi veya 2 den kucuk degil
	#endif
	
	
	
	
	return 0;
}
