#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Kullanýcýdan bir sayý girmesini iste ve 1 den o sayýya olan sayýlarýn toplamýný bulan program
	
	
	/*
	int i,j,sonuc;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&i);
	sonuc=0;
	for(j=0;j<=i;j++)
	{
		sonuc+=j;
	}
	printf("Sonuc: %d",sonuc);
	*/
	
	// 0 dan  10 a kadar olan tek ve çift sayýlarý ekrana yazdýr
	
	int i,j;
	
	for(i=0;i<=10;i+=2)
	{
		printf("Cift sayilar: %d\n",i);
	}
	
	for(j=1;j<=10;j+=2)
	{
		printf("Tek sayilar: %d\n",j);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
