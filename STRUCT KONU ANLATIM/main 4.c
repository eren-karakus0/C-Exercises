#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char isim[10];
	float x_ekseni;
	float y_ekseni;
}nokta;

void ekranayazdir(nokta p[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%s = (%.2f,%.2f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
	}
}

int main() {
	
	nokta can[5]={{"Can",5,6},{"Eren",3,7},{"Canan",7.2,4.1},{"Ali",6,2},{"Merve",7.12,9}};
	ekranayazdir(can,5);
	
	system("COLOR 2"); 
	return 0;
}
