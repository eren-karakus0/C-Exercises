#include <stdio.h>
#include <stdlib.h>

void bolme(int bolunen,int bolen)
{
	int kalan,bolum;
	
	kalan=bolunen%bolen;
	bolum=bolunen/bolen;
	
	printf("Kalan = %d  Bolum = %d",kalan,bolum);
}
int main() {
	
	int bolen,bolunen;
	
	printf("Bolunen degerini giriniz:");
	scanf("%d",&bolunen);
	printf("Bolen degerini giriniz:");
	scanf("%d",&bolen);
	
	bolme(bolunen,bolen);
	
	system("COLOR 2"); 
	return 0;
}
