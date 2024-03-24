#include <stdio.h>
#include <stdlib.h>

void ekle(int A[],int sirano,int deger,int elemansayisi)
{
	int i;
	
	if(sirano<=elemansayisi+1)
	{
		for(i=elemansayisi-1;i>=sirano-1;i--)
		{
			A[i+1]=A[i];
		}
		A[sirano-1]=deger;
		
		printf("Dizimizin eklenmis hali: ");
		for(i=0;i<=elemansayisi;i++)
		{
			printf("%d ",A[i]);
		}
	}
	else
	{
		printf("Gecerli bir sira numarasi giriniz: ");
	}
}
int main() {
	
	int n,sirasi;
	int i,deger;
	int dizi[100];
	printf("Kac tane sayi uretilsin: ");
	scanf("%d",&n);
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nHangi siraya eleman eklenecek: ");
	scanf("%d",&sirasi);
	printf("Eklenecek sayi nedir: ");
	scanf("%d",&deger);
	
	ekle(dizi,sirasi,deger,n);
	
	system("COLOR 2"); 
	return 0;
}
