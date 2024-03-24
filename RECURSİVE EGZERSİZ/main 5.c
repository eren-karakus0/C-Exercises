#include <stdio.h>
#include <stdlib.h>

int bolum(int bolunen,int bolen)
{
	int sonuc;
	if(bolen<=bolunen)
	{
		sonuc=1+bolum(bolunen-bolen,bolen);
	}
	else
	{
		sonuc=0;
	}
	return sonuc;
}
int main() {
	
	int a,b;
	
	printf("Bolunen sayiyi giriniz: ");
	scanf("%d",&a);
	printf("Bolen sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("Bolum = %d\n",bolum(a,b));
	printf("Kalan = %d",a-bolum(a,b)*b);
	
	system("COLOR 2"); 
	return 0;
}
