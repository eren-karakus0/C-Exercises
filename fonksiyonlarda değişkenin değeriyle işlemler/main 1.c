#include <stdio.h>
#include <stdlib.h>

void calculus(float sayi1,float sayi2,char islem,float *islemsonucu)
{
	switch(islem)
	{
		case '+':printf("%.2f",sayi1+sayi2);
		break;
		case '-':printf("%.2f",sayi1-sayi2);
		break;
		case '*':printf("%.2f",sayi1*sayi2);
		break;
		case '/':printf("%.2f",sayi1/sayi2);
		break;
		default:printf("Yanlis islem girdiniz: ");
	}
}

int main() {
	
	float sayi1,sayi2;
	char islem;
	float sonuc;
	
	printf("Hangi islemi yapmak istiyorsunuz: ");
	scanf("%c",&islem);
	printf("Lutfen iki sayi giriniz: ");
	scanf("%f%f",&sayi1,&sayi2);
	
	calculus(sayi1,sayi2,islem,&sonuc);
	
	system("COLOR 2"); 
	return 0;
}
