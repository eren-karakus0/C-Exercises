#include <stdio.h>
#include <stdlib.h>

// geriye de�er d�nd�rmeyen fonksiyonlarda void kullan�l�r

// geriye de�er d�nd�meyen fonksiyon
/*
void tekmiciftmi(int can)
{
	if(can%2==0)
	{
		printf("Sayniz cift sayidir");
	}
	else
	{
		printf("Sayiniz tek sayidir: ");
	}
}

int main() {
	
	int sayi;
	printf("Lutfen bir sayi giriniz. ");
	scanf("%d",&sayi);
	tekmiciftmi(sayi);
*/
//geriye de�er d�nd�ren fonksiyon

int tekmiciftmi(int can)
{
	if(can%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {
	
	int sayi,sonuc;
	printf("Lutfen bir sayi giriniz. ");
	scanf("%d",&sayi);
	sonuc=tekmiciftmi(sayi);
	
	if(sonuc==1)
	{
		printf("Sayiniz cift sayidir");
    }
    else
    {
    	printf("Sayiniz tek sayidir");
	}
	
	

	
	
	return 0;
}
