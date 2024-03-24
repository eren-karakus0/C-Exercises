#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1
#define M 2

struct isci{
	char isim[20];
	char soyisim[20];
	int yas;
};
struct urun{
	char referans_kodu[20];
	float fiyat;
};

struct magaza{
	char magaza_adi[10];
	char sokak_ismi[10];
	char mahalle[10];
	int telefon;
	float satis;
	struct isci e1;
	struct isci e2;
	struct isci e3;
	struct urun p[M];
};
void isciyi_olustur(struct isci *m)
{
	printf("Iscinin adini giriniz: ");
	scanf("%s",m->isim);
	printf("Iscinin soyadini giriniz: ");
	scanf("%s",m->soyisim);
	printf("Iscinin yasini giriniz: ");
	scanf("%d",&m->yas);
}

void urunu_olustur(struct urun *pr)
{
	printf("Referans kodu giriniz: ");
	scanf("%s",pr->referans_kodu);
	printf("Urun fiyatini giriniz: ");
	scanf("%f",&pr->fiyat);
}

void magaza_olustur(struct magaza *m)
{
	int i;
	
	printf("Lutfen magaza adini giriniz: ");
	scanf("%s",m->magaza_adi);
	printf("Lutfen magazanin bulundugu sokak adini giriniz: ");
	scanf("%s",m->sokak_ismi);
	printf("Lutfen magazanin bulundugu mahalle adini giriniz: ");
	scanf("%s",m->mahalle);
	printf("Lutfen magazanin telefon mumarasini giriniz: ");
	scanf("%d",&m->telefon);
	printf("Satis rakamini giriniz: ");
	scanf("%f",&m->satis);
	printf("Isci 1: \n");
	isciyi_olustur(&m->e1);
	printf("Isci 2: \n");
	isciyi_olustur(&m->e2);
	printf("Isci 3: \n");
	isciyi_olustur(&m->e3);
	for(i=0;i<M;i++)
	{
		printf("%d.Urun: \n",i+1);
		urunu_olustur(&m->p[i]);
	}
}

void isciyi_bas(struct isci t)
{
	printf("Iscinin ismi: %s\n",t.isim);
	printf("Iscinin soyadi: %s\n",t.soyisim);
	printf("Iscinin yasi: %d\n",t.yas);	
}

void urunu_bas(struct urun k)
{
	printf("Referans kodu: %s\n",k.referans_kodu);
	printf("Fiyat: %f\n",k.fiyat);
}

void magazayi_bas(struct magaza m)
{
	int i;
	
	printf("Magazanin ismi: %s\n",m.magaza_adi);
	printf("Magazanin bulundugu sokak: %s\n",m.sokak_ismi);
	printf("Magazanin bulundugu mahalle: %s\n",m.mahalle);
	printf("Magazanin telefon numarasi: %d\n",m.telefon);
	printf("Magazanin satis rakami: %f\n",m.satis);
	printf("Isci 1: \n");
	isciyi_bas(m.e1);	
	printf("Isci 2: \n");
	isciyi_bas(m.e2);	
	printf("Isci 3: \n");
	isciyi_bas(m.e3);
	for(i=0;i<M;i++)
	{
		printf("%d.Urun: \n",i+1);
		urunu_bas(m.p[i]);
	}
}

void en_yasli(struct magaza m)
{
	struct isci yasli;
	if(m.e1.yas>=yasli.yas)
	{
		yasli=m.e1;
	}
	if(m.e2.yas>=yasli.yas)
	{
		yasli=m.e2;
	}
	if(m.e3.yas>=yasli.yas)
	{
		yasli=m.e3;
	}
	printf("En yasli isci: \n");
	isciyi_bas(yasli);
}

void ortalama_fiyat(struct magaza m[N])
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			s+=m[i].p[j].fiyat;
		}
		printf("%s magazasinda yer alan urunlerin ortalama fiyati: %f\n",m[i].magaza_adi,(float)s/M);
	}
}

void bulundugu_mahalle(struct magaza m[N],char q[12])
{
	int i;
	
	for(i=0;i<N;i++)
	{
		if(stricmp(m[i].mahalle,q)==0)
		{
			printf("%s mahallesinde %s magazasi bulunur \n",m[i].mahalle,m[i].magaza_adi);
		}
	}
}

int main() {
	
	struct magaza m[N];
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Magaza %d: \n",i+1);
		magaza_olustur(&m[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("Magaza %d: \n",i+1);
		magazayi_bas(m[i]);
	}
	for(i=0;i<N;i++)
	{
		en_yasli(m[i]);
	}
	for(i=0;i<N;i++)
	{
		ortalama_fiyat(m);
	}
	for(i=0;i<N;i++)
	{
		bulundugu_mahalle(m,"sisli");
	}
	
	system("COLOR 2"); 
	return 0;
}
