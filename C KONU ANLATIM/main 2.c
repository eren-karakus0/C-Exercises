#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

// const yazýlan deðerin hiçbir zaman deðiþmemesini saðlar
// Ayný iþlemi define ile de yapabilirsin define daha çok kullanýlýr

int main() {
	/*
	Aþaðýdaki program hata verir sayim a farklý deðer atadýðým için 
	const int sayim =15;
	sayim=20;
	printf("%d",sayim);
	*/
	const int sayim =15;

	printf("%f",PI);
	return 0;
}
