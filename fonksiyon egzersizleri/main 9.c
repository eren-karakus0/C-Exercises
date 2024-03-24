#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
	int sayi;
	while(1)
	{
		printf("Lutfen bir sayi giriniz: ");
		scanf("%d",&sayi);
		if(sayi<0)
		{
			break;
		}
	}
}

int main() {
	
	sayiiste();
	
	system("COLOR 2");
	return 0;
}
