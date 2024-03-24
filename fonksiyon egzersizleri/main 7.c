#include <stdio.h>
#include <stdlib.h>

int us(int taban,int us)
{
	int i;
	int sonuc=1;
	for(i=1;i<=us;i++)
	{
		sonuc=taban*sonuc;
	}
	return sonuc;
}

int main() {
	
	int a,b;
	
	printf("ussu alinacak sayiyi ve us degerini giriniz: ");
	scanf("%d%d",&a,&b);
	
	printf("%d ^ %d = %d ",a,b,us(a,b));
	
	
	system("COLOR 2"); 
	return 0;
}
