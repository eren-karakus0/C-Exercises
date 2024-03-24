#include <stdio.h>
#include <stdlib.h>

float dortislem(float a,float b,char islem)
{
	if(islem=='+')
	{
		return a+b;
	}
	else if(islem=='-')
	{
		return a-b;
	}
	else if(islem=='*')
	{
		return a*b;
	}
	else if(islem=='/')
	{
		return a/b;
	}
	else 
	{
		printf("Yanlis islem girdiniz: ");
	}
	
}

int main() {
	
	float a,b;
	char islem;
	
	printf("Hangi islemi yaptirmak istiyrosunuz (+ - / * ) : ");
	scanf("%c",&islem);
	printf("Lutfen iki sayi giriniz: ");
	scanf("%f%f",&a,&b);

	printf("Islemin sonucu = %.2f ",dortislem(a,b,islem));
	
	
	system("COLOR 2");
	return 0;
}
