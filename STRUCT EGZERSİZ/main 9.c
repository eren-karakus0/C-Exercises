#include <stdio.h>
#include <stdlib.h>

// pointerda struct içine girerken . yerine -> iþareti kullanýlýr. 

struct zaman{
	int saniye;
	int dakika;
	int saat;
};

void frk(struct zaman t1,struct zaman t2,struct zaman *fark)
{
	int sn;
	int dk;
	
	sn=(t2.saat*3600+t2.dakika*60+t2.saniye)-(t1.saat*3600+t1.dakika*60+t1.saniye);
	dk=sn%3600;
	fark->saat=sn/3600;
	fark->saniye=dk%60;
	fark->dakika=dk/60;
	printf("Saat: %d  Dakika: %d  Saniye: %d",fark->saat,fark->dakika,fark->saniye);
}

int main() {
	
	struct zaman t1,t2,fark;
	
	printf("Baslangic zamani saat dakika saniye olarak giriniz: ");
	scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
	
	printf("Bitis zamani saat dakika saniye olarak giriniz: ");
	scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
	
	frk(t1,t2,&fark);
	
	system("COLOR 2"); 
	return 0;
}
