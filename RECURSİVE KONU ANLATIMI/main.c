#include <stdio.h>
#include <stdlib.h>

//kendi kendini �a��ran fonkssiyonlard�r

void listele(int n)
{
	if(n==0)
	{
		printf("%d",n);
	}
	else
	{
		printf("%d ",n);
		listele(n-1);
	}
}


int main() {
	
	int n;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	listele(n);
	
	system("COLOR 2"); 
	return 0;
}
