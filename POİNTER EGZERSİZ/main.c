#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char karakter='c';
	int integerdegerim=1;
	float floatsayim=5.43;
	double doublesayim=122232321321;
	
	printf("Karakterim = %c\nKarakterimin adresi = %d\n\n",karakter,&karakter);
	printf("Integerim = %d\nIntegerimin adresi = %d\n\n",integerdegerim,&integerdegerim);
	printf("Floatim = %f\nFloatimin adresi = %d\n\n",floatsayim,&floatsayim);
	printf("Doubleim = %lf\nDoubleimin adresi = %d\n\n",doublesayim,&doublesayim);

	system("COLOR 2"); 
	return 0;
}
