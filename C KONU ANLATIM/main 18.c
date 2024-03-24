#include <stdio.h>
#include <stdlib.h>


float dortislem(float i,float j,char islem)
{
	switch(islem)
	{
		case '+':return i+j;
		break;
		case '-':return i-j;
		break;
		case '*':return i*j;
		break;
		case '/':return i/j;
		break;
		default: printf("Yanlis karakter girdiniz: ");
    }
}

int main() {
	
// Klavyeden girilen iki sayinin toplamýný farkýný çarpýmýný bölümünü 
// gerçekleþtiren C programýný fonksiyon kullanmadan ve kullanarak yapýnýz.

    
    float i,j;
	char islem;
	
	printf("Hangi islemi yapmak istiyorsunuz \n");
	scanf("%c",&islem);
	printf("Lutfen iki adet sayi giriniz \n");
	scanf("%f%f",&i,&j);
	
	printf("Sonuc= %.2f ",dortislem(i,j,islem));
	
	
    
    // fonksiyonsuz
/*
	float i,j;
	char islem;
	
	printf("Hangi islemi yapmak istiyorsunuz \n");
	scanf("%c",&islem);
	printf("Lutfen iki adet sayi giriniz \n");
	scanf("%f%f",&i,&j);
	
	switch(islem)
	{
		case '+':printf("Sonuc= %.2f ",i+j);
		break;
		case '-':printf("Sonuc= %.2f ",i-j);
		break;
		case '*':printf("Sonuc= %.2f ",i*j);
		break;
		case '/':printf("Sonuc= %.2f ",i/j);
		break;
		default: printf("Yanlis karakter girdiniz: ");
*/
    
    
    
    
    
	return 0;
}
