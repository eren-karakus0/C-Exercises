#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu{
	char isim[10];
	char soyisim[10];
	int yas;
	int seviye;
};

struct ekip{
	char isim[10];
	struct oyuncu oyuncu1;
	struct oyuncu oyuncu2;
};
void oyuncuyu_olustur(struct oyuncu *t)
{
	printf("Isim: ");
	scanf("%s",t->isim);
	printf("Soyisim: ");
	scanf("%s",t->soyisim);
	printf("Yas: ");
	scanf("%d",&t->yas);
	printf("Seviye: ");
	scanf("%d",&t->seviye);
}

void ekibi_olustur (struct ekip *e)
{
	printf("Ekip adi: ");
	scanf("%s",e->isim);
	printf("Oyuncu 1: \n");
	oyuncuyu_olustur(&e->oyuncu1);
	printf("Oyuncu 2: \n");
	oyuncuyu_olustur(&e->oyuncu2);
}
void oyuncuyu_bas(struct oyuncu e)
{
	printf("\t\tIsim: %s \n",e.isim);
	printf("\t\tSoyisim: %s \n",e.soyisim);
	printf("\t\tYas: %d \n",e.yas);
	printf("\t\tSeviye: %d \n",e.seviye);
}

void ekibi_bas(struct ekip e)
{
	printf("\tIsim: %s \n",e.isim);
	printf("\tOyuncu 1: \n");
	oyuncuyu_bas(e.oyuncu1);
	printf("\tOyuncu 2: \n");
	oyuncuyu_bas(e.oyuncu2);	
}

int main() {

	struct ekip tab[N];
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Ekip %d: \n",i+1);
		ekibi_olustur(&tab[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("Ekip %d: \n",i+1);
		ekibi_bas(tab[i]);
	}
	
	
	system("COLOR 2"); 
	return 0;
}
