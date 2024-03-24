#include <stdio.h>
#include <stdlib.h>

struct degerTip{
	int tip;
	union{
	char karakter;
	float sayi
	}birlesim;
};

int main() {
	
	int i,j;
	struct degerTip degerler[20];
	char satir;
	float ortalama;
	int n=0;
	i=-1;
	do
	{
		i++;
		printf("Lutfen bir tam sayi giriniz: ");
		scanf("%d",&degerler[i].tip);
		scanf("%c",&satir);
		if(degerler[i].tip==1)
		{
			printf("Karakter giriniz:");
			scanf("%c",&degerler[i].birlesim.karakter);
			scanf("%c",&satir);
		}
		
		else if(degerler[i].tip==0)
		{
			printf("Reel sayi giriniz: ");
			scanf("%f",&degerler[i].birlesim.sayi);
		}
	}
	while(degerler[i].tip==0 || degerler[i].tip==1);
	
	for(j=0;j<=i;j++)
	{
		if(degerler[j].tip==0)
		{
			ortalama+=degerler[j].birlesim.sayi;
			n++;
		}
	}
	ortalama=ortalama/n;
	
	printf("Reel sayilarin ortalamasi: %f",ortalama);
	
	
	system("COLOR 2"); 
	return 0;
}
