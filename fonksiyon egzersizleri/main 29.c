#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float alan(int a,int b,int c)
{
	float u;
	float alan;
	
	u=(a+b+c)/2;
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	return alan;
	
}

int main() {
	
	int a,b,c;
	
	printf("3 Kenar uzunlugunu giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Alan = %.2f",alan(a,b,c));
	
	system("COLOR 2"); 
	return 0;
}
