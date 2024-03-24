#include <stdio.h>
#include <stdlib.h>


double karekokbul(double N)
{
	double karekok;
	int i;
	
	if(N>0.0)
	{
		karekok = N/2;
		for(i=1;i<=50;i++)
		{
			karekok = ((karekok*karekok)+N)/(2*karekok);
		}
		return karekok;
	}
	else if(N == 0)
	{
		return 0;
	}
	else
	{
		printf("Lutfen gecerli bir deger giriniz: ");
	}
}

int main() {
	
	double sayi;
	printf("Karekoku bulunacak sayi: ");
	scanf("%lf",&sayi);
	printf("%.2lf karekoku = %.2lf \n",sayi,karekokbul(sayi));
	
	system("COLOR 2"); 
	return 0;
}
