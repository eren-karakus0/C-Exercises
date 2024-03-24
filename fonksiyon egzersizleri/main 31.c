#include <stdio.h>
#include <stdlib.h>

void birlestir(int A[],int B[],int C[],int N,int K)
{
	int j,i,sayac=0;
	for(i=0;i<N;i++)
	{
		C[sayac]=A[i];
		sayac++;
	}
	for(j=0;j<K;j++)
	{
		C[sayac]=B[j];
		sayac++;
	}
}

int main() {
	
	int K,N,i;
	
	printf("Ilk dizinin eleman sayisini giriniz: ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++)
	{
		printf("%d. sayi ",i+1);
		scanf("%d",&A[i]);
	}
	printf("Ikinci dizinin eleman sayisini giriniz: ");
	scanf("%d",&K);
	int B[K];
	for(i=0;i<K;i++)
	{
		printf("%d. sayi ",i+1);
		scanf("%d",&B[i]);
	}
	int birlesim[N+K];
	birlestir(A,B,birlesim,N,K);
	for(i=0;i<N+K;i++)
	{
		printf("%d  ",birlesim[i]);
	}
	
	system("COLOR 2"); 
	return 0;
}
