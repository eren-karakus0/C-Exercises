#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
	
	char can[MAX];
	char *pointer;
	
	printf("Lutfen bir karakter dizisi giriniz: ");
	gets(can);
	
	for(pointer=can;*pointer;pointer++)
	{
		
	}
	printf("\nDizimiz %s %d karakterden olusmaktadir: ",can,pointer-can);
	
	system("COLOR 2"); 
	return 0;
}
