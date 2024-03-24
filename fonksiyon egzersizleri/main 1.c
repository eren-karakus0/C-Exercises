#include <stdio.h>
#include <stdlib.h>

int tek(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d \n",i);
		}
	}
}

int main() {
	
	int n;
	
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
    tek(n);
	
	system("COLOR 2");
	return 0;
}
