#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	//can=&can[0] can dizisi asl�nda dizinin ilk eleman�n�n adresine e�ittir
	char can[100]="canan"; 
	char *p1;
	
	p1=can;
	
	printf("5. karakterim %c dir",*(p1+4));
	*/
	
	int *pt;
	int t[100];
	
	for(pt=t;pt<t+100;pt++)
	{
		*pt=0;
	}
	for(pt=t;pt<t+100;pt++)
	{
		printf("%d\n",*pt);
	}
	
	system("COLOR 2"); 
	return 0;
}
