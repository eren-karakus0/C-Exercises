#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

// const yaz�lan de�erin hi�bir zaman de�i�memesini sa�lar
// Ayn� i�lemi define ile de yapabilirsin define daha �ok kullan�l�r

int main() {
	/*
	A�a��daki program hata verir sayim a farkl� de�er atad���m i�in 
	const int sayim =15;
	sayim=20;
	printf("%d",sayim);
	*/
	const int sayim =15;

	printf("%f",PI);
	return 0;
}
