#include <stdio.h>
#include <stdlib.h>

//En basit tan�mla toplu konularda her �eyi i�ine al�r a�a��daki �rnekler gibi 

int main() {
	
	struct tarih{
		int gun;
		char ay[10];
		int yil;
	};
	
	struct calisan_bilgi{
		int sicil_no;
		char isim[30];
		char adres[50];
		struct tarih ise_giris;
		double maas; 
	};calisan
	
	return 0;
}
