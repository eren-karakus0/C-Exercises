#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int eren[5]={1,3,6,8,4};
	
	printf("%d",eren[4]);
	*/
	/*
	int eren[10],i;
	
	for(i=0;i<=10;i++)
	{
		eren[i]=2*i;
		printf("%d\n",eren[i]);
	}
	*/
	
	// Dizi elemanlarına yeni değer ataması yapma
	/*
	int can[5]={19,10,8,17,9};
	int i;
	
	can[2]=18;
	can[3]=1;
	for(i=0;i<5;i++)
	{
		printf("%d ",can[i]);
	}
	*/
	
	// for ile kullancıdan tek boyutlu sayı dizisi değerleri alma
	/*
	int sayilarim[3];
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&sayilarim[i]);
	}
		for(i=0;i<3;i++)
	{
		printf("%d\n",sayilarim[i]);
	}
	*/
	
	// while ile kullanıcıdan tek boyutlu sayı dizisi değerleri alma 
	/*
	int sayilarim[3];
	int i=0;
	
	while(i<3)
	{
		scanf("%d",&sayilarim[i]);
		i++;
	}
	i=0;
	while(i<3)
	{
		printf("%d\n",sayilarim[i]);
		i++;
	}
	*/
	
	// do while ile kullanıcıdan tek boyutlu sayı dizisi değerleri alma 
	
	
	int sayilarim[3];
	int i=0;
	
	do
	{
		scanf("%d",&sayilarim[i]);
		i++;
	}
	while(i<3);
	
	i=0;
	do
	{
		printf("%d\n",sayilarim[i]);
		i++;
	}
	while(i<3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
