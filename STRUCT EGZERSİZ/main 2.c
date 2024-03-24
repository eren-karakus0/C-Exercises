#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip{
	int no;
	char cevap[10];
};
struct sonucTip{
	int no;
	int noT;
};

int main() {
	
	
	struct ogrenciTip ogrenci[30];
	struct sonucTip sonuc[30];
	int i,j;
	char anahtar[10],satir;
	int dogru,yanlis;
	
	printf("Lutfen cevap anahtarini giriniz: ");
	for(i=0;i<10;i++)
	{
		scanf("%s",&anahtar[i]);
	}
	
	printf("Lutfen ogrenci bilgilerini giriniz: \n");
	for(i=0;i<30;i++)
	{
		printf("Ogrenci no: ");
		scanf("%d",&ogrenci[i].no);
		printf("Cevaplari: ");
		scanf("%c",&satir);
		dogru=yanlis=0;
		for(j=0;j<10;j++)
		{
			scanf("%s",&ogrenci[i].cevap[j]);
			if(anahtar[i]==ogrenci[i].cevap[j])
			{
				dogru++;
			}
			else if(ogrenci[i].cevap[j] != ' ')
			{
				yanlis++;
			}
		}
		sonuc[i].no=ogrenci[i].no;
		printf("Dogru: %d   Yanlis: %d\n",dogru,yanlis);
		sonuc[i].noT=dogru-(yanlis/4);
	}
	for(i=0;i<30;i++)
	{
		printf("Ogrenci no: %d  Not: %d\n",ogrenci[i].no,sonuc[i].noT);
	}
	
	system("COLOR 2"); 
	return 0;
}
