#include <stdio.h>
#include <stdlib.h>

// Birinci ve Ýkinci gösterim 
/*
struct nokta{
	float x_ekseni;
	float y_ekseni;
};
*/
typedef struct {
	float x_ekseni;
	float y_ekseni;
}nokta;


int main() {
	/*
	struct nokta can;
	can.x_ekseni=3.15;
	can.y_ekseni=4.78;
	*/
	nokta can;
	can.x_ekseni=3.15;
	can.y_ekseni=4.78;
	
	printf("%.2f  %.2f",can.x_ekseni,can.y_ekseni);
	
	
	
	system("COLOR 2"); 
	return 0;
}
