#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol{
int x;
int y;	
}kontrol;

int main() {
	
	int *X,*Y;
	kontrol.x=100;
	X=&kontrol.x;
	printf("Tamsayi(x) = %d bellek adresi = %d\n",kontrol.x,X);
	
	kontrol.y=200;
	Y=&kontrol.y;
	printf("Tamsayi(y) = %d bellek adresi = %d",kontrol.y,Y);
	
	system("COLOR 2"); 
	return 0;
}
