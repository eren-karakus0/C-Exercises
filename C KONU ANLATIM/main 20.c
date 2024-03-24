/*
#include <stdio.h>
#include <stdlib.h>

int kare(int can)
{
	int sonuc=can*can;
	return sonuc;
}


int main() {
	
	int x=4,karesi;
	
	karesi=kare(x);
	
	printf("%d",karesi);
	return 0;
}
*/

//örnek



#include <stdio.h>
#include <stdlib.h>


int ussunu_al(int a,int b)
{
	int i,sonucum;
	for(i=0;i<b;i++)
	{
		sonucum=sonucum*a;
	}
	return sonucum;
}

int main() {
	
	
	int x=4,y=5,sonuc;
	
	sonuc=ussunu_al(x,y);
	printf("%d",sonuc);
		
	return 0;
}	
	
	
	
	










	
