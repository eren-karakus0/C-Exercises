#include <stdio.h>
#include <stdlib.h>

int faktor(int n)
{
	int sonuc;
	if(n!=0)
	{
	sonuc = n*faktor(n-1);
	}
	else
	{
	sonuc = 1;
	}
	return sonuc;
}

int main() {
	
	int n;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	printf("%d",faktor(n));
		
	system("COLOR 2"); 
	return 0;
}
