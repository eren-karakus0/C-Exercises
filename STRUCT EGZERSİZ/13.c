#include <stdio.h>
#include <stdlib.h>

typedef struct karmasik_sayi{
	float reel;
	float sanal;
}karmasik;

void topla(karmasik k1,karmasik k2)
{
	float r,s;
	r=k1.reel+k2.reel;
	s=k1.sanal+k2.sanal;
	if(s>0)
	{
		printf("Sonuc = %.2f+%.2fi",r,s);
	}
	else
	{
		printf("Sonuc = %.2f%.2fi",r,s);
	}
}
int main() {
	
	karmasik k1,k2;
	
	printf("Lutfen 1. sayinin reel kismi giriniz: ");
	scanf("%f",&k1.reel);
	printf("Lutfen 1. sayinin sanal kismi giriniz: ");
	scanf("%f",&k1.sanal);
	printf("Lutfen 2. sayinin reel kismi giriniz: ");
	scanf("%f",&k2.reel);
	printf("Lutfen 2. sayinin sanal kismi giriniz: ");
	scanf("%f",&k2.sanal);
	
	topla(k1,k2);
	
	system("COLOR 2"); 
	return 0;
}
