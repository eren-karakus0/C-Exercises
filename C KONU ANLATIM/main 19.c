#include <stdio.h>
#include <stdlib.h>


void can()
{
	int x=3;
	printf("%d",x);
}



int main() {
	// local olan yani s�sl�den sonras� ge�erli
	//k�saca fonksiyon ile main farkl� 
	int x=1;
	
	{
		int x=2;
		printf("%d\n",x);
		can();
	}
	return 0;
}
