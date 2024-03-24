#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

union hesapla{
		float cevre;
		float alan;
	}hesap;
	
int main() {
	
	int r;
	printf("Lutfen yaricap degerini giriniz: ");
	scanf("%d",&r);
	
	hesap.cevre=2*PI*r;
	printf("Cevre = %.2f\n",hesap.cevre);
	
	hesap.alan=PI*r*r;
	printf("Alan = %.2f",hesap.alan);
		
	system("COLOR 2"); 
	return 0;
}
