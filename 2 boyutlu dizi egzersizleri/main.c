#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dizi[10];
	int i=0;
	int max,min;
	
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	max=dizi[0];
	
	for(i=0;i<10;i++)
	{
		if(max<=dizi[i])
		{
			max=dizi[i];
		}
	}
	printf("Max deger = %d \n",max);
	
	min=dizi[0];
	
	for(i=0;i<10;i++)
	{
		if(min>=dizi[i])
		{
			min=dizi[i];
		}
	}
	printf("Min deger = %d ",min);
	
	system("COLOR 2"); 
	return 0;
}
