#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define VARMI
#define SAYI 5
#define POWER 1
int main() {
	
	// include kütüphane eklemek için kullanýlýr
	// define deðer tanýmlamak için kullanýlýr pi sayýsý gibi sayý olmak zorunda deðildir
	// fonksiyon tipinde makrolarda da define kullanýlýr içindeki iþlemi yapar || circleArea(r) (PI*r*r) gibi
	// undef define deki deðeri kaldýrmak için kullanýlýr define dan sonra kullanýldýðýnda deðeri direkt siler
	// ifdef kullanýmýnda ifdef içerisindeki ifade ile kullanýlýr ifade tanýmlanmamýþsa uðramadan geçer
	// else durumunda da ifdef içindeki ifade macro tanýmlanmamýþþsa else ye geçer ve oradan devam eder
	/*
	#ifdef PI
	//code
	#endif
	
	#ifdef PII // burada PII tanýmlanmadýðý için #else içi çalýþýr
	//doðru kod
	#else
	//else code
	#endif
	
	// örnek
	
	#ifdef PII
	printf("C harika gidiyor.");
	#else
	printf("C muthis gidiyor.");
	#endif
	
	
	int sayi;
	
	#ifdef VARMIo
	sayi=2;
	#else
	printf("Lutfen bir deger giriniz. ");
	scanf("%d",sayi);
	#endif
	
	printf("sayi degeri: %d",sayi);
	
	
	// #if#else kullanýmý
	
	#if(SAYI==6)
	printf("sayimiz: %d",SAYI);
	#else
	printf("Sayimiz 5 ten farklidir.");
	#endif
	*/
	
	// #error kullanýmý
	// hata fýrlatma 
	#if !defined POWER || POWER<2
	#error POWER tanimlanmadi veya 2 den kucuk degil
	#endif
	
	
	
	
	return 0;
}
