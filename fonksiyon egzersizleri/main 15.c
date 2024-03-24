#include <stdio.h>
#include <stdlib.h>

void floyd(int n)
{
	int i=1;
	int j;
	int a=1;
	
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%3d",a);
			a++;
			j++;
		}
		printf("\n");
		i++;
	}
}
int main() {
	
	int sayi;
	
	printf("Floyd ucgeninin satir sayisini giriniz: ");
	scanf("%d",&sayi);
	
	floyd(sayi);
	
	system("COLOR 2");
	return 0;
}
