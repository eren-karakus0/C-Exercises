#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int *sayi)
{
	int sonuc=1;
	int i;
	
	for(i=1;i<=*sayi;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}

int main() {
	
	int n;
	
	printf("Lutfen faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&n);
	printf("%d faktoriyel = %d",n,faktoriyel(&n));
	
	system("COLOR 2"); 
	return 0;
}
