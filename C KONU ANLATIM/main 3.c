#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int x,y;
	
	printf("X sayisini giriniz: ");
	scanf("%d",&x);
	printf("Y sayisini giriniz: ");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("X y den buyuktur: ");
	}	
	else if(x==y)
	{
		printf(" X Y ye esittir: ");
	}
	else 
	{
		printf("X Y den kucuktur: ");
	}
	
	*/
	
	
	// Kullan�c�dan al�nan �� say�dan en b�y���n� bulan program 
	/*
	int i,j,k;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&i);
	printf("Bir sayi giriniz: ");
	scanf("%d",&j);
	printf("Bir sayi giriniz: ");
	scanf("%d",&k);
	
	
	if(i > j && i > k)
	{
		printf("Girilen sayilardan en buyugu %d dir.",i);
	}
	else if(j > i  && j > k)
	{
		printf("Girilen sayilardan en buyugu %d dir ",j);
	}
	else 
	{
		printf("Girilen sayilardan en buyugu %d dir ",k);
	}
	
	*/
	
	// Girilen sa�n�n tek mi �ift mi oldu�unu bulan program
	
	
	/*
	int i;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&i);
	
	if(i%2==0)
	{
		printf("Girdiginiz sayi cifttir. ");
	}
	else
	{
		printf("Girdiginiz sayi tektir. ");
	}
	
	
	*/
	
	// Ki�inin se�imlerde oy kullan�p kullanamayaca��n� belirleyen program 
	
	
	/*
	int i;
	
	printf("Lutfen yasinizi giriniz: ");
	scanf("%d",&i);
	
	if(i > 18 && i < 100)
	{
		printf("Secimlerde oy kullanabiliriniz. ");
	}
	else 
	{
		printf("Secimlerde oy kullanamazsiniz. ");
	}
	
	
	*/
	
	// Girilen iki say�n�n b�y�kl�k k���kl�k duruma g�re ekrana yazd�r
	
	
	/*
	int i,j;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&i);
	printf("Bir sayi giriniz: ");
	scanf("%d",&j);
	
	if(i > j)
	{
		printf("Yazilan sayilardan buyugu %d dir ",i);
	}
	else if(i == j)
	{
		printf("Yazilan sayilar birbirine esittir. ve sayi %d dir ",i);
	}
	else 
	{
		printf("Yazilan sayilardan buyugu %d dir ",j);
	}
	
	*/
	
	// i� i�e if
	
	int i,j;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&i);
	printf("Bir sayi giriniz: ");
	scanf("%d",&j);
	
	// i� i�e if
	
	if(i >= j)
	{
		if(i == j)
		{
			printf("Sonuc: %d = %d ",i,j);
		}
		else 
		{
			printf("SONUC: %d > %d ",i,j);
		}
	}
	else 
	{
		printf("Sonuc: %d < %d ",i,j);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
