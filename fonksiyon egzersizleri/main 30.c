#include <stdio.h>
#include <stdlib.h>

void seri(int n)
{
	int i;
	int sonuc=0;
	
	for(i=1;i<=n;i++)
	{
		sonuc=sonuc+i*i;
		printf("Sonuc = %d\n",sonuc);
	}
}
int main() {
	
	int n;
	
	printf("Seri degerini giriniz: ");
	scanf("%d",&n);
	seri(n);
	
	system("COLOR 2"); 
	return 0;
}
