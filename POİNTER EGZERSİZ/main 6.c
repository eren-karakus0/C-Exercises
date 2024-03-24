#include <stdio.h>
#include <stdlib.h>
#define N 10


int main() {
	
	int *canan;
	int can[N];
	int i;
	int max,min;
	
	printf("%d adet deger giriniz: \n",N);
	for(canan=can;canan<can+N;canan++)
	{
		scanf("%d\n",canan);
	}
	max=min=can[0];
	
	for(canan=can+1;canan<can+N;canan++)
	{
		if(max<=*canan)
		{
			max=*canan;
		}
		if(min>=*canan)
		{
			min=*canan;
		}
	}
	printf("En buyuk eleman = %d\n",max);
	printf("En kucuk deger = %d\n",min);
	
	system("COLOR 2"); 
	return 0;
}
