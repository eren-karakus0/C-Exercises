#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int  i = 0;
	
	while(i<10)
	{
		printf("%d\n",i);
		i++;
	}
	*/
	
	/*
	int i,j;
	i=1;
	
	printf("Lutfen bir sayi giriniz. ");
	scanf("%d",&j);
	
	while(i<=10)
	{
		printf("%d\n",i*j);
		i++;
	}
	*/
	
	// tek ve �ift say�lar� bast�rma 
	
	
	/*
	int i,j;
	
	i=0;
	j=1;
	while(i<=10)
	{
		printf("Cift sayilar: %d \n",i);
		i+=2;
	}
		while(j<=10)
	{
		printf("Tek sayilar: %d \n",j);
		j+=2;
	}
	
	*/
	
	
	// Klavyeden girilen bir say�dan ba�lay�p bir azalta azalta 1 e kadar ekrana yazd�rma.
	/*
	int i;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&i);
	
	while(i>0)
	{
		printf("%d ",i);
		i--;
	}
	
	*/
	
	// Sonsuz d�ng�
	
	// while(0) ko�ulun yanl�� oldu�unu belirtir ve hi� de�erlendirilmez.
	// while(1) ko�ulun do�ru oldu�unu bekkirtir ve sonsuz d�ng�ye koyar.
	/*
	while(1)
	{
		printf("dongu\n");
	}
	
	while(0)
	{
		printf("Dongu\n");
	}
	printf("asdlasd");
	*/
	
	
	// DO WH�LE KULLANIMI
	// ilk �nce i�lemi yapar sonra while ko�uluna bakar.
	// burada ilk olarak do ya girdi�i i�in 15 say�y� bas�l�r ama sonra ��kt���nda 16 say�y� while a g�re 10 dan k���k olmad��� i�in devam etmez.
	
	/*
	int i=15;
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
	*/
	
	//  while � do while a �evirme
	
	int sayim;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayim);
	
	int i = 1;
	
	do
	{
		printf("%d\n",sayim*i);
		i++;
	}
	while(i<=10);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
