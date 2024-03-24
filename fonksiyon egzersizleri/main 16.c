#include <stdio.h>
#include <stdlib.h>


int enbuyuk(int A[],int elemansayisi)
{
	int i;
	int enb=A[0];
	
	for(i=1;i<=elemansayisi;i++)
	{
		if(A[i]>enb)
		{
			enb=A[i];
		}
	}
	return enb;
}
int enkucuk(int B[],int sayisi)
{
	int i;
	int enk=B[0];
	
	for(i=1;i<=sayisi;i++)
	{
		if(B[i]<enk)
		{
			enk=B[i];
		}
	}
	return enk;
}

int main() {
	
	int i,n,j;
	
	printf("Kac adet sayi uretilsin: ");
	scanf("%d",&n);
	
	int dizi[n];
	srand(time(0));
	
	printf("Dizi elemanlari:\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			dizi[i]=rand()%100;
		printf("%3d ",dizi[i]);
		}
		printf("\n");
	}	
	printf("\nEn buyuk deger = %d\n",enbuyuk(dizi,n));
	printf("\nEn kucuk deger = %d\n",enkucuk(dizi,n));
	system("COLOR 2");
	
	
	return 0;
}
