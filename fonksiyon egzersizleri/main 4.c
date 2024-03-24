#include <stdio.h>
#include <stdlib.h>


int topla(int can,int canan)
{
	return can+canan;
}

int main() {
	
	int a,b;
	
	printf("Lutfen iki sayi giriniz. ");
	scanf("%d%d",&a,&b);
	printf("Sayilarin toplami = %d ",topla(a,b));

	system("COLOR 2");
	return 0;
}
