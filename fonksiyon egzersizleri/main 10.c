#include <stdio.h>
#include <stdlib.h>

int mukemmel(int n)
{
	int i=1;
	int toplam=0;
	while(i<n)
	{
		if(n%i==0)
		{
			toplam=toplam+i;
		}
		i++;
	}
	
	if(toplam==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main() {
	
	int sonuc;
	int sayi;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	sonuc = mukemmel(sayi);
	if(sonuc==1)
	{
		printf("Mukemmel sayi");
	}
	else
	{
		printf("Mukemmel sayi degil");
	}
	
	
	system("COLOR 2"); 
	return 0;
}
