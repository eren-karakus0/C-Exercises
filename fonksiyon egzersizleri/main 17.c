#include <stdio.h>
#include <stdlib.h>

void kayitsil(int A[],int sira,int elemansayisi)
{
	int i;
	if(sira>=elemansayisi+1)
	{
		printf("Gecerli bir sira numarasi giriniz: ");
	}
	else
	{
		for(i=sira-1;i<elemansayisi-1;i++)
		{
			A[i]=A[i+1];
		}
		printf("Kayit silindikten sonraki durum: \n");
		for(i=0;i<elemansayisi-1;i++)
		{
			printf("%d\n",A[i]);
		}
	}
}

int main() {
	
	int n;
	int i;
	int sirano;
	
	printf("Kac adet sayi uretilecek: ");
	scanf("%d",&n);
	int dizi[n];
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%5d",dizi[i]);
		printf("\n");
	}
	
	printf("Silinecek degerin sira numarasini giriniz: ");
	scanf("%d",&sirano);
	kayitsil(dizi,sirano,n);
	
	
	system("COLOR 2"); 
	return 0;
}
