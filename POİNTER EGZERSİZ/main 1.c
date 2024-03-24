#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int s1,s2,toplam;
	int *ptr1,*ptr2;
	printf("S1 in adresi = %d\nS2 nin adresi = %d\n",&s1,&s2);
	
	
	ptr1=&s1;
	ptr2=&s2;
	
	printf("Lutfen iki sayi giriniz: ");
	scanf("%d%d",ptr1,ptr2);
	
	toplam=*ptr1+*ptr2;
	
	printf("%d",toplam);
	
	system("COLOR 2"); 
	return 0;
}
