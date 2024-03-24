#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int i,j,k;
	
	printf("Lutfen 3 aci giriniz: ");
	scanf("%d%d%d",&i,&j,&k);
	
	if(i+j+k==180)
	{
		if(i==60 && j==60 && k==60)
		{
			printf("Bu bir eskenar ucgendir");
		}
		else if(i==j || i==k || j==k)
		{
			printf("Ikizkenar ucgendir");
		}
		else 
		{
			printf("Cesitkenar ucgendir");
		}
	}
	else
	{
		printf("Acilar ucgen olusturmaz");
	}
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	float a,ucret;
	
	printf("Lutfen konusma surenizi giriniz: ");
	scanf("%f",&a);	
	
	ucret=(0.08)*(a-3)+(0.25);
	
	if(a<=3)
	{
		printf("Konusma sureniz asim yapmadigi icin ucret 0.25 TL dir");
	}
	else
	{
		
		printf("Toplam ucretiniz = %.2f ",ucret);
	}
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	float a,b,sonuc;
	char islem;
	
	printf("Isleminizi seciniz(+,-): ");
	scanf("%c",&islem);
	printf("Iki sayi giriniz: ");
	scanf("%f%f",&a,&b);
	

	if(a!=0 && b!=0)
	{
		if(islem=='+')
	{
		sonuc=1/a+1/b;
		printf("1/%.2f+1/%.2f = %.2f",a,b,sonuc);
	}
	else
	{
		sonuc=1/a-1/b;
		printf("1/%.2f - 1/%.2f = %.2f",a,b,sonuc);
	}
	}
	else
	{
		printf("Islem gerceklesmez");
	}
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int sira;
	char ch;
	
	printf("Bir kakakter giriniz: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		sira=(int)ch-(int)'A'+1;
	}
	else if(ch>='a' && ch<='z')
	{
		sira=(int)ch-(int)'a'+1;
	}
	else
	{
		printf("Lutfen bir harf giriniz:");
	}
	printf("%c : %d. harftir ",ch,sira);
	
	|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int i,n;
	float x,seri;
	
	printf("Pozitif sayi giriniz: ");
	scanf("%d",&n);
	printf("Reel sayi giriniz: ");
	scanf("%f",&x);
	
	for(i=1;i<=2*n-1;i+=2)
	{
		seri += i/pow(x,i+1);
	}
	printf("Seri = %f ",seri);
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int i,n;
	float x,seri;
	char devam;
	
	do
	{
	printf("Pozitif sayi giriniz: ");
	scanf("%d",&n);
	printf("Reel sayi giriniz: ");
	scanf("%f %c",&x,&devam);
	
	for(i=1;i<=2*n-1;i+=2)
	{
		seri += i/pow(x,i+1);
	}
	printf("Seri = %f \n",seri);
	
	}
	while(devam=='E' || devam=='e');
	printf("Hoscakalin <3");
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	#define tam 150
	int boy,no,fark,minno,minboy;
	
	printf("Ogrenci no : ");
	scanf("%d",&no);
	printf("Ogrenci boy : ");
	scanf("%d",&boy);
	
	minno=no;
	fark=abs(boy-tam);
	minboy=boy;
	
	while(no>0)
	{
	printf("Ogrenci no : ");
	scanf("%d",&no);
	printf("Ogrenci boy : ");
	scanf("%d",&boy);
	
	if(abs(boy-tam)<fark)
	{
		fark=abs(boy-tam);
		minno=no;
		minboy=boy;
	}
	}
	printf("%d numarali ogrenci %d santim boyuyla %d santime en yakindir ",minno,minboy,tam);
	
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	#define tavhiz 0.038
	#define kushiz 0.012
	
	float tavsan=1042,kus=2272;
	int yil=0;
	
	while(tavsan<kus)
	{
		tavsan=tavsan+tavsan*tavhiz;
		kus=kus+kus*kushiz;
		yil++;
		printf("%d. yil: tavsan = %d  kus = %d \n",yil,(int)tavsan,(int)kus);
	}
	
	*/
	
	#define kitver 0.04
	#define gidaver 0.056
	#define luksver 0.196123
	
	int kod;
	float kitap,gida,luks;
	
	printf("Sirasiyla kitap temel gida ve luks urun fiyatlarini giriniz: ");
	scanf("%f%f%f",&kitap,&gida,&luks);
	printf("Istediginiz urunun kodunu giriniz (0,1,2): ");
	scanf("%d",&kod);
	
	kitap=kitap+kitap*kitver;
	gida=gida+gida*gidaver;
	luks=luks+luks*luksver;
	
	switch(kod)
	{
		case 0:printf("Vergili kitap fiyati = %.2f ",kitap);
		break;
		case 1:printf("Vergili temel gida fiyati = %.2f ",gida);
		break;
		case 2:printf("Vergili luks urun  fiyati = %.2f ",luks);
		break;
		default:printf("Yanlis kod girdiniz ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
