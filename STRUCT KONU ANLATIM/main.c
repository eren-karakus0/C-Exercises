#include <stdio.h>
#include <stdlib.h>

//En basit tanýmla toplu konularda her þeyi içine alýr aþaðýdaki örnekler gibi 

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
