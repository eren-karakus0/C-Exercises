#include <stdio.h>
#include <stdlib.h>

struct katilimci{
	char soyisim[20];
	char isim[20];
	int kahvalti;
	int aksamyemegi;
	int hotel;
	int yanliz;
};

void ikiyildizli(struct katilimci tab[4])
{
	int i;
	printf("Iki yildizli hotelde konaklayan katilimcilar: \n");
	for(i=0;i<4;i++)
	{
		if(tab[i].hotel==2)
		{
			printf("Soyad: %s  Ad: %s \n",tab[i].soyisim,tab[i].isim);
		}
	}
}

void kahvalti(struct katilimci tab[],int *nb)
{
	int i;
	*nb=0;
	for(i=0;i<4;i++)
	{
		if(tab[i].kahvalti==1)
		{
			*nb+=1;
			if(tab[i].yanliz==0)
			{
				*nb+=1;
			}
		}
	}
}
void fatura(struct katilimci p,int *total)
{
	*total=0;
	
	if(p.kahvalti==1)
	{
		*total+=15;
	}
	if(p.aksamyemegi==1)
	{
		*total+=35;
	}
	if(p.yanliz==0)
	{
		*total*=2;
	}
	if(p.hotel==2)
	{
		*total+=75;
	}
	if(p.hotel==3);
	{
		*total+=100;
	}
}

int main() {
	
	int n;
	int m;
	
	struct katilimci tablo[4]={{"Boz","Can",0,1,2,1},{"osman","Haci",0,0,1,0},{"Eren","Karakus",1,0,2,1},{"Esma","Karakus",0,1,1,0}};
	ikiyildizli(tablo);
	kahvalti(tablo,&n);
	fatura(tablo[2],&m);
	
	printf("Kahvalti yapan katilimcilar: %d\n",n);
	printf("%s Soyisimli katilimci tarafindan odenen fatura = %d",tablo[2].soyisim,m);
	
	system("COLOR 2"); 
	return 0;
}
