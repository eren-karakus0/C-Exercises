#include <stdio.h>
#include <stdlib.h>
//ilk ve ikinci kullanım
/*
enum renkler{
	mavi,
	sari,
	kirmizi,
	yesil
};
*/
typedef enum {
	mavi,
	sari,
	kirmizi,
	yesil
}renkler;

int main() {
	/*
	enum renkler renk=kirmizi;
	printf("%d",renk);
	*/
	renkler renk=yesil;
	printf("%d",renk);

	
	system("COLOR 2"); 
	return 0;
}
