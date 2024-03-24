#include <stdio.h>
#include <stdlib.h>

void saniyeyecevir(int saniye)
{
	int saat,dakika,sn,zaman;
	saat=saniye/3600;
	zaman=saniye%3600;
	dakika=zaman/60;
	sn=zaman%60;
	printf("%d:%d:%d",saat,dakika,sn);
}
int main() {
	
	int saniye;
	
	printf("Saniyeyi giriniz: ");
	scanf("%d",&saniye);
	
	saniyeyecevir(saniye);
	
	system("COLOR 2"); 
	return 0;
}
