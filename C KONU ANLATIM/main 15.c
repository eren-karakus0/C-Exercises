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
	
	
	
	// STRLEN kullanýmý 
	// Karakter dizisinin boyutunu gösterir.
	
	char can[]="Aralik";
	
	printf("Karakter dizimizin boyutu %d ",strlen(can));
	
	return 0;
}
