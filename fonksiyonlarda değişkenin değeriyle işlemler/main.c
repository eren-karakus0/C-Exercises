#include <stdio.h>
#include <stdlib.h>

void bolunebilirlik(int *n)
{
	if(*n%2==0)
	{
		printf("Sayimiz cift sayidir:\n ");
	}
	if(*n%3==0)
	{
		printf("Sayimiz 3 un katidir:\n ");
	}
	if(*n%2==0 && *n%3==0)
	{
		printf("Sayimiz 6 nin katidir: ");
	}
}
int main() {
	
	int n;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	bolunebilirlik(&n);
	
	
	system("COLOR 2"); 
	return 0;
}
