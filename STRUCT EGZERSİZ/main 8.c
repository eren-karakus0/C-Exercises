#include <stdio.h>
#include <stdlib.h>
#include <string.h>;

typedef struct ogrenci{
	char ad[10];
	char soyad[20];
	int no;
	int sinif;
};


int main() {
	
	struct ogrenci ogr;
	
	printf("Lutfen ogrenci no sunu giriniz: ");
	scanf("%d",&ogr.no);
	
	if(ogr.no==2019)
	{
		ogr.no=2019;
		strcpy(ogr.ad,"Can");
		strcpy(ogr.soyad,"Boz");
		ogr.sinif=5;
		
		printf("%d\n%s\n%s\n%d",ogr.no,ogr.ad,ogr.soyad,ogr.sinif);
	}
	else
	{
		printf("Yeni bir no giriniz: ");
	}
	
	
	
	system("COLOR 2"); 
	return 0;
}
