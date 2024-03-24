#include <stdio.h>
#include <stdlib.h>

// size of deðiþkenin hafýzada kaç byte yer tutacaðýný söyler

int main() {
	
	int eren = 10;
	float sayim  = 4.64;
	double doublesayim = 4.56;
	char karakterim = 'h';
	/*
	printf("eren degiskeni hafizada %d byte kadar yer tutar\n",sizeof(eren));
	printf("Int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(int));
	printf("Char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(char));
	printf("Float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(float));
	printf("Double degiskeni hafizada %d byte kadar yer tutar\n",sizeof(double));
	*/
	
	printf("eren degiskeni hafizada %d byte kadar yer tutar\n",sizeof(eren));
	printf("Int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(int));
	printf("Char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
	printf("Float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(sayim));
	printf("Double degiskeni hafizada %d byte kadar yer tutar\n",sizeof(doublesayim));
	
	//iki gösterim de olur.
	
	
	return 0;
}
