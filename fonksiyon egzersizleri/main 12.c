#include <stdio.h>
#include <stdlib.h>

int tekcift(int a)
{
	if(a%2==1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main() {
	
	int sayi;
	int sonuc;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	sonuc=tekcift(sayi);
	
	if(sonuc==1)
	{
		printf("Sayi tektir");
	}
	else
	{
		printf("Sayi cifttir");
	}
	
	return 0;
}
