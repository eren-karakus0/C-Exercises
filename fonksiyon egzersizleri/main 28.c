#include <stdio.h>
#include <stdlib.h>

float FdenCye(float f)
{
	return (0.555)*(f-32);	
}
float CdenFye(float c)
{
    return (1.8*c)+32;
}

int main() {
	
	float f,c;
	int secim;
	
	printf("1. Fahrenayt >>> Celcius\n");
	printf("2. Celcius >>> Fahrenayt\n");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		printf("Fahrenayt degerini giriniz: ");
		scanf("%f",&f);
		printf("%.2f Fahrenayt = %.2f Celciustur",f,FdenCye(f));
	}
	else if(secim==2)
	{
		printf("Celcius degerini giriniz: ");
		scanf("%f",&c);
		printf("%.2f Celcius = %.2f Fahrenayttir",c,CdenFye(c));
	}
	else
	{
		printf("Yanlis deger girdiniz:");
	}
	
	
	system("COLOR 2"); 
	return 0;
}






