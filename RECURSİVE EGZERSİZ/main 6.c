#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-2)+fibonacci(n-1));  
	}
}
int main() {
	
	int sayi,i;
	
	printf("Kac adet sayi uretilecek: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d ",fibonacci(i));
	}
	
	system("COLOR 2");
	return 0;
}
