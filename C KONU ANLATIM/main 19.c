#include <stdio.h>
#include <stdlib.h>


void can()
{
	int x=3;
	printf("%d",x);
}



int main() {
	// local olan yani süslüden sonrasý geçerli
	//kýsaca fonksiyon ile main farklý 
	int x=1;
	
	{
		int x=2;
		printf("%d\n",x);
		can();
	}
	return 0;
}
