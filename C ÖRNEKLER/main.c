#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	
  
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	// yukarýda yaptýðýmýn kýsa yolu
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	

	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	

	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	

	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	

	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int i,fiyat;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&i);
	
	fiyat=i*i*40+200;
	
	printf("%d metre kare halinin fiyati = %d TL dir",i*i,fiyat);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	char i;
	int a;
	
	printf("Almak istediginiz hali tipini giriniz: ");
	scanf("%c",&i);
	printf("Dosenecek halinin metre karesini giriniz: ");
	scanf("%d",&a);
	
	switch(i)
	{
		case 'T':printf("Almak istediginiz hali fiyati %d TL dir ",18*a);
		break;
		case 'B':printf("Almak istediginiz hali fiyati %d TL dir ",17*a);
		break;
		case 'S':printf("Almak istediginiz hali fiyati %d TL dir ",19*a);
		break;
		default:printf("Yanlis kodu girdiniz. ");
	}
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int i;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&i);
	
	if(i%13==0 || i%17==0)
	{
		printf("Sayiniz 13 veya 17 ye tam bolunuyor");
	}
	else
	{
		printf("Sayiniz 13 veya 17 ye tam bolunmuyor");
	}
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	float i,j,k;
	
	printf("Lutfen 3 sayi giriniz: ");
	scanf("%f%f%f",&i,&j,&k);
	
	printf("ortalama = %.2f ",(i+j+k)/3);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int i,j,k;
	
	printf("Lutfen 3 sayi giriniz: ");
	scanf("%d%d%d",&i,&j,&k);
	
	printf("%d",100*i+10*j+k);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	float mesafe,sure;
	
	printf("Mesafeyi giriniz: ");
	scanf("%f",&mesafe);
	printf("Sureyi giriniz: ");
	scanf("%f",&sure);
	
	printf("Aracinzin ortalama hizi = %.2f km/saat",mesafe/sure);
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	char can;
	
	printf("Lutfen bir karakter giriniz: ");
	scanf("%c",&can);
	
	if(can>='A' && can<='Z')
	{
		printf("kucuk karakterimiz = %c ",tolower(can));
	}
	else
	{
		printf("Lutfen buyuk harf giriniz: ");
	}
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||-
	
	int n;
	int i;
	float sonuc;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sonuc += (float)1/i;
	}
	printf("SONUC = %.2f",sonuc);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int n;
	int i;
	float sonuc;
	do
	{
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	}
	while(n<1);
	
	
	for(i=1;i<=n;i++)
	{
		sonuc += (float)1/i;
	}
	printf("SONUC = %.2f",sonuc);	
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	float x;
	
	do
	{
		printf("Bir pozitif sayi giriniz: \n");
		scanf("%f",&x);
		if(x<0)
		{
			printf("Pozitif sayi giriniz: \n");
		}
		if(x<0)continue;
		printf("sayimizin karekoku = %.2f \n",sqrt(x));
	}
	while(x);
	
	*/
	
	
	int i,j;
	
	printf("Lutfen iki sayi giriniz: ");
	scanf("%d%d",&i,&j);
	
	if(i==0 || j==0)
	{
		printf("%d*%d = 0\n",i,j);
	}
	else if(i>0 && j>0)
	{
		printf("%d*%d = +\n",i,j);
	}
	else if(i<0 && j<0)
	{
		printf("%d*%d = +\n",i,j);
	}
	else
	{
		printf("%d*%d = -",i,j);
	}
	
	
	
	return 0;
}
