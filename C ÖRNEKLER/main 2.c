#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Klavyeden girilen bir cümledeki kelime sayýsýný bulan program
	/*
	char cumle[100];
	int i=0;
	int sayac=0;
	
	printf("Bir cumle giriniz: \n");
	gets(cumle);
	
	while(cumle[i])
	{
		if(cumle[i]== 32)
		{
			sayac++;
		}
		i++;
	}
	printf("Cumledeki kelime sayisi : %d ",sayac+1);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	// Girilen cümlenin kaç karakterden oluþtuðunu bulan program.
	
	char cumle[100];
	int i=0;
	
	printf("Bir cumle giriniz: ");
	gets(cumle);
	
	while(cumle[i])
	{
		i++;
	}
	printf("%d",i);
	

	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	//Girilen cümlenin harflerini alt alta ekrana bastýrma
	
	char cumle[100];
	int i;
	
	printf("Bir cumle giriniz: ");
	gets(cumle);
	
	for(i=0;cumle[i];i++)
	{
		printf("%c\n",cumle[i]);
	}
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	//Klavyeden girilen cümlenin harflerini bir bir arttýrarak yazan program
	
	char kelime[100];
	int i=0;
	int j=0;
	printf("Lutfen bir kelime giriniz: ");
	gets(kelime);
	
	
	while(i<strlen(kelime))
	{
		j=0;
		while(j<=i)
		{
			printf("%c ",kelime[j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	//Cümle içerisinde en fazla kullanýlan karakteri bulma
	*/
	char cumle[150];
	int i=0;
	char harf;
	int encok;
	int kucukharf[26]={0};
	
	printf("Lutfen bir harf giriniz: ");
	gets(cumle);
	
	while(cumle[i])
	{
		if(cumle[i] >='a' && cumle[i] <='z')
		{
			kucukharf[cumle[i]-'a']++;
		}
		i++;
	}
	
	encok=kucukharf[0];
	for(i=1;i<26;i++)
	{
		if(kucukharf[i] !=0)
		{
			if(kucukharf[i]>encok)
			{
				encok=kucukharf[i];
				harf=i+'a';
			}
		}
	}
	printf("En fazla kullanilan karakter = %c",harf);
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
