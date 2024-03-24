#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
	
	int arr[MAX];
	int n,i;
	int *ptr;
	
	printf("Dizi kac elemanli olsun: \n");
	scanf("%d",&n);
	
	ptr=arr;
	
	printf("Lutfen elemanlari giriniz: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	printf("Degerlerim: \n");
	for(i=0;i<n;i++)
	{
		printf("%5d",*ptr);
		ptr++;
	}
	
	system("COLOR 2"); 
	return 0;
}
