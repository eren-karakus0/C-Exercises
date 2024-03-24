#include <stdio.h>
#include <stdlib.h>

int faktor(int n)
{
	int j;
	int sonuc=1;
	for(j=1;j<=n;j++)
	{
		sonuc=sonuc*j;
	}
	return sonuc;
}

int main() {
	
	int a;
	int i;
	
	printf("Faktoriyel alinacak sayiyi giriniz: ");
	scanf("%d",&a);
	
	
	for(i=1;i<=a;i++)
	{
		printf("%d! = %d\n",i,faktor(i));
	}
	
	system("COLOR 2"); 
	return 0;
}
