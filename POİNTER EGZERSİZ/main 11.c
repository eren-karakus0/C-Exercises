#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *pointer;
	int i;
	
	printf("Dizimizin ilk hali: ");
	for(i=0;i<15;i++)
	{
		printf("%3d",*(dizi+i));
	}
	printf("\n");
	
	printf("Tek sayilar: ");
	for(pointer=dizi+1;pointer<dizi+15;pointer+=2)
	{
		printf("%3d",*pointer);
	}
	printf("\n");
	
	printf("Cift sayilar: ");
	for(pointer=dizi;pointer<dizi+15;pointer+=2)
	{
		printf("%3d",*pointer);
	}
	
	system("COLOR 2"); 
	return 0;
}
