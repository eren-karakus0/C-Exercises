#include <stdio.h>
#include <stdlib.h>

struct kontrol1{
	int x;
	char y;
	long z;
};
union kontrol2{
	int a;
	char b;
	long c;
};

int main() {
	
	
	
	printf("struct = %d byte \n",sizeof(struct kontrol1));
	printf("union = %d byte",sizeof(union kontrol2));
	
	system("COLOR 2"); 
	return 0;
}
