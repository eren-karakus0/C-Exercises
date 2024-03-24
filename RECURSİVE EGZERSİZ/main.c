#include <stdio.h>
#include <stdlib.h>


int topla(int sayi)
{
	if(sayi == 1)
	{
		return 1;
	}
	else
	{
		return sayi+topla(sayi-1);
	}
}

int main() {
	
	int n;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	
	printf("Toplam sonucu: %d",topla(n));
	
	system("COLOR 2"); 
	return 0;
}
