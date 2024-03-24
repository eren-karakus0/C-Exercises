#include <stdio.h>
#include <stdlib.h>

void yerdegisim(int x,int y)
{
	int a;
	
	a=x;
	x=y;
	y=a;
	
	printf("Yer degistirilmis hali: %d %d ",x,y);
}

int main() {
	
	int x,y;
	
	printf("Iki sayi giriniz:\n");
	scanf("%d%d",&x,&y);
	
	yerdegisim(x,y);
	
	
	system("COLOR 2"); 
	return 0;
}
