#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char c;
	int sayma[26]={0};
	int can,karakter,i;
	karakter=0;
	
	printf("Lutfen bir cumle giriniz: ");
	while((c=getchar()) !='\n')
	{
		can=c-'a';
		if(can>=0 && can<26)
		sayma[can]++;
		else
		karakter++;	
	}
	printf("Girdiginiz text %d karakter iceriyor\n",karakter);
	for(i=0;i<26;i++)
	{
		printf("%d kez %c\n",sayma[i],'a'+i);
	}
	
	system("COLOR 2"); 
	return 0;
}
