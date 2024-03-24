#include <stdio.h>
#include <stdlib.h>

struct yarismaciTip{
	char isim[10],soyad[10];
	float puan[10],performans;
};

float puanHesap(struct yarismaciTip pat)
{
	int i;
	float max=0.0;
	float min=6.0;
	float sonuc;
	
	for(i=0;i<10;i++)
	{
		if(pat.puan[i]>=max)
		{
			max=pat.puan[i];
		}
		if(pat.puan[i]<=min)
		{
			min=pat.puan[i];
		}
		sonuc+=pat.puan[i];
	}
	
	sonuc=(sonuc-max-min)/8;
	return sonuc;
}

int main() {
	
	int i;
	struct yarismaciTip patenci;
	
	printf("Yarismaci ismini giriniz: ");
	scanf("%s",&patenci.isim);
	printf("Yarismaci soyismini giriniz: ");
	scanf("%s",&patenci.soyad);
	printf("\n");
	printf("Hakem puanlari: \n");
	
	for(i=0;i<10;i++)
	{
		scanf("%f",&patenci.puan[i]);
	}
	
	patenci.performans=puanHesap(patenci);
	
	printf("Performans notunuz = %.2f",patenci.performans);
	
	system("COLOR 2"); 
	return 0;
}
