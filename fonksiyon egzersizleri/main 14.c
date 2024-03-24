#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
	int sayi1=0;
	int sayi2=1;
	int sayi3;
	int i;
	
	printf("Uretilecek fibonacci sayilari \n");
	
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			sayi3=i;
		}
		else
		{
		sayi3=sayi1+sayi2;
		sayi1=sayi2;
		sayi2=sayi3;
		}
		printf("%d\n",sayi3);
	}
}

int main() {
	
	int sayi;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	fibonacci(sayi);
	
	system("COLOR 2");
	return 0;
}
