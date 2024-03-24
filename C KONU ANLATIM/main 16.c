#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
		
	// \0 karakterlerin bittiðini söyler
	/*
	char can[]={'c','a','n','a','n','\0'};
	
	char dizim[]="canan\n";
	char kullanici[100];
	
	printf("%s",&dizim);
	
	printf("Lutfen bir karakter dizisi giriniz. ");
	scanf("%s",&kullanici);
	
	printf("%s",kullanici);
	*/
	// string içerisindeki herhangi bir karakteri deðiþtirme
	/*
	char dizim[]="Can Boz";
	
	dizim[3]='i';
	
	printf("%s",dizim);
	*/
	
	
	
	// strlen kullanýmý 
	// Karakter dizisinin boyutunu gösterir.
	/*
	char can[]="Aralik";
	
	printf("Karakter dizimizin boyutu %d\n ",strlen(can));
	printf("Karakter dizimizin boyutu %d ",sizeof(can));
	// Burada size on \0 ý da alýyor
	*/
	
	// strcmp fonksiyonu 
	// Ýki karakter dizisini kýyaslar ASCI kodlarýný kýyaslar hangisinin deðeri büyükse 1 deðerini döndürür
	/*
	int sonuc;
	char can[15]="abcdef";
	char canan[15]="ABCDEF";
	
	sonuc=strcmp(can,canan);
	printf("%d\n",sonuc);
	
	if(sonuc<0)
	{
		printf("Can canandan daha kucuktur ");
	}
	else if(sonuc>0)
	{
		printf("Can canandan daha buyuktur");
	}
	else
	{
		printf("Ikiside birbirine eþittir");
	}
	
	*/
	
	// strncmp fonksiyonu
	// 'n' belli bir karaktere kadar manasý verir
	/*
	int sonuc;
	char can[15]="abcdef";
	char canan[15]="ABCDEF";
	
	sonuc=strncmp(can,canan,3);
	
	printf("%d\n",sonuc);
	
	if(sonuc<0)
	{
		printf("Can canandan daha kucuktur ");
	}
	else if(sonuc>0)
	{
		printf("Can canandan daha buyuktur");
	}
	else
	{
		printf("Ikiside birbirine eþittir");
	}
	*/
	
	
	// strcpy fonksiyonu 
	// Bir dizinin stringini diðer bir karakter dizisinin içine atamaya yarar.
	/*
	char can[]="Benim adim can boz ";
	char canan[100];
	
	strcpy(canan,can);
	
	printf("%s",canan);
	
	// strncpy 
	
	char can[]="Benim adim can boz ";
	char canan[100]="";
	// boþ karakter bug olmamasý için 
	strncpy(canan,can,5);
	
	printf("%s",canan);
	*/
	
	// strcat fonksiyonu 
	// iki tane karakter dizisini birleþtirir
	/*
	char bos[100];
	
	strcpy(bos,"Benim");
	
	strcat(bos," adim");
	strcat(bos," Can Boz");
	
	printf("%s",bos);
	*/
	// strncat fonksiyonu 
	/*
	char can[100];
	char canan[100];
	int a;
	
	printf("Lutfen bir yazi giriniz: \n");
	scanf("%s",&can);	
	
	printf("Lutfen ikinci yaziyi giriniz: \n");
	scanf("%s",&canan);	
	
	printf("Birinci yazinin sonuna kac karakter eklemek istersin \n");
	scanf("%d",&a);
	
	printf("Birlestirmeden once %s\n",can);
	
	printf("Birlestirmeden sonra %s",strncat(can,canan,a));
	*/
	
	// gets() fgets() ile string ifadeyi almak arasýndaki farklar
	// fgets kullanýmý önerilir
	
	/*
	char name[30];
	printf("Lutfen isminizi giriniz:\n");
	// gets(name);
	fgets(name,sizeof(name),stdin);
	// stdin standart input
	printf("%s",name);
	*/
	
	// strrev fonksiyonu
	// karakter dizisini ters çevirir
	/*
	char can[100];
	
	printf("Lutfen bir text giriniz: ");
	scanf("%s",&can);
	
	printf("Girdiginiz ifade: %s\n",can);
	printf("Girdiginiz ifadenin ters cevrilmis hali: %s ",strrev(can));
	*/
	
	// strlwr fonksiyonu
	// girilen deðerlerin hepsini küçük harf yapar
	/*
	char can[100];
	
	printf("Lutfen bir text giriniz: ");
	fgets(can,sizeof(can),stdin);
	// scanf("%s",&can);
	// scanf boþluk olunca metni kestiði için fgets kullanýlabilir
	
	printf("Girdiginiz ifade: %s\n",can);
	printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali: %s ",strlwr(can));
	*/
	
	// strupr fonksiyonu 
	// büyük harfe çevirir
	/*
	char can[100];
	
	printf("Lutfen bir text giriniz: ");
	fgets(can,sizeof(can),stdin);
	
	printf("Girdiginiz ifade: %s\n",can);
	printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali: %s ",strupr(can));
	*/ 
	
	// strstr fonksiyonu
	// pointerle alakalý bi konu örneðe bak anlarsýn
	/*
	char can[100]="C dilini ogreniyoruz";
	char *sub;
	sub=strstr(can,"il");
	printf("\nArama sonrasi yeni string: %s ",sub);
	*/
	
	// EGZERSÝZ
	/*
	char dizi1[]="bonne";
	char dizi2[]="soiree";
	char sonuc[100]="";
	
	strcpy(sonuc,dizi1);
	strncpy(sonuc+3,dizi2,5);
	// buradaki +3 adres belirtiyor 0 1 2 3 = b o n n 
	printf("%s",sonuc);
	*/
	
	char can[100][100]={"bir","iki","uc","dort","bes"};
	
	printf("Dizinin 4. elemani = %s\n",can[3]);
	printf("Dizinin 4. elemaninin 3.karakteri = %c ",can[3][2]);
	
		
	return 0;
}
