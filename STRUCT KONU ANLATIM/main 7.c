#include <stdio.h>
#include <stdlib.h>

//Structtan fark� i�lemler ayn� sadece union bellekte daha az yer kaplar en b�y�k byte de�eri kadar yer kaplar 
// mesela float ve char girilince 4 byte yer kaplar ama struct ta yaparsam bunu 4+1 den 5 byte yer kaplar


union test{
	int x;
	char a;
	float y;
	double z;
};


int main() {
	
	union test t;
	
	t.x=2;
	printf("%d\n",t.x);
	printf("unionumuzun tuttugu alan %d byte tir\n",sizeof(t));
	t.y=10;
	printf("%f",t.y);
	
	system("COLOR 2"); 
	return 0;
}
