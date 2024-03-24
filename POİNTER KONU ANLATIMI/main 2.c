#include <stdio.h>
#include <stdlib.h>

void degistir(int *a,int *b)
{
	int sayi;
	sayi=*a;
	*a=*b;
	*b=sayi;
	
}


int main() {
	
	int a=10,b=20;
	
	printf("Cagirmadan once %d %d\n",a,b);
	degistir(&a,&b);
	printf("Cagirdiktan sonra %d %d\n",a,b);
		
	system("COLOR 2"); 
	return 0;
}
