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
	
	// tek ve çift sayýlarý bastýrma 
	
	
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
	
	
	// Klavyeden girilen bir sayýdan baþlayýp bir azalta azalta 1 e kadar ekrana yazdýrma.
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
	
	// Sonsuz döngü
	
	// while(0) koþulun yanlýþ olduðunu belirtir ve hiç deðerlendirilmez.
	// while(1) koþulun doðru olduðunu bekkirtir ve sonsuz döngüye koyar.
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
	
	
	// DO WHÝLE KULLANIMI
	// ilk önce iþlemi yapar sonra while koþuluna bakar.
	// burada ilk olarak do ya girdiði için 15 sayýyý basýlýr ama sonra çýktýðýnda 16 sayýyý while a göre 10 dan küçük olmadýðý için devam etmez.
	
	/*
	int i=15;
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
	*/
	
	//  while ý do while a çevirme
	
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
