#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int arr[]={10,20,30,40,50};
	int *ptr;
	
	ptr=arr;
	
	printf("%d\n",ptr); 
	printf("%d",ptr+1);
	
	system("COLOR 2");
	return 0;
}
