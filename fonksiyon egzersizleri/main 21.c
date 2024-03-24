#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void daire(float r)
{
	printf("Dairenin alani = %.2f \n",PI*r*r);
	printf("Dairenin cevresi = %.2f ",2*PI*r);
}

int main() {
	
	float r;
	printf("Yaricap degerini giriniz: ");
	scanf("%f",&r);
	
	daire(r);
	
	system("COLOR 2"); 
	return 0;
}
