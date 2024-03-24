#include <stdio.h>
#include <stdlib.h>


int faktor(int a)
{
	int i;
	int sonuc=1;
	for(i=1;i<=a;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}

int main() {
	
	int a;
	
	printf("Faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&a);
	printf("Sonuc = %d ",faktor(a));
	
	
	system("COLOR 2");
	return 0;
}
