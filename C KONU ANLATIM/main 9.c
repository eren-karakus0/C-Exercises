#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// ceil   floor   sqrt   pow   abs


// ceil sayýnýn bir üstteki sayýya yuvarlanmasýný saðlar 
// floor ceil in tam tersi tabana yuvarlar sayýyý
//sqrt karekök almaya yarar
// pow üs almaya yarar
// abs mutlar deðer almaya yarar sadece tam sayýda çalýþýr

int main() {
	
	printf("%f\n",ceil(4.2));
	
	printf("%f\n",floor(4.78));
	
	printf("%f\n",sqrt(80));
	
	printf("%f\n",pow(2,4));
	
	printf("%d\n",abs(-15));
	
	return 0;
}
