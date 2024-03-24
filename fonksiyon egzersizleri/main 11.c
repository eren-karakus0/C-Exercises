#include <stdio.h>
#include <stdlib.h>

int karsilastir(int a,int b)
{
	if(a>b)
	{
		return 1;
	}
	else if(b>a)
	{
		return 0;
    }
    else
    {
    	return 2;
	}
}

int main() {
	
	int a,b;
	int sonuc;
	
	printf("Lutfen iki sayi giriniz: \n");
	scanf("%d%d",&a,&b);
	sonuc=karsilastir(a,b);
	if(sonuc==1)
	{
		printf("Buyuk sayi %d dir",a);
	}
	else if(sonuc==0)
	{
		printf("Buyuk sayi %d dir",b);
	}
	else
	{
		printf("Sayilar birbirine esittir");
	}
	
	system("COLOR 2"); 
	return 0;
}
