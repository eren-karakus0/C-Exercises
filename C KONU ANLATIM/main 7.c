#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*
	int day;
	
	printf("1 ile 7 arasinda bir sayi giriniz: ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:printf("MONDAY");break;
		case 2:printf("TUESDAY");break;
		case 3:printf("WEDNESDAY");break;
		case 4:printf("THURSDAY");break;
		case 5:printf("FRIDAY");break;
		case 6:printf("SATURDAY");break;
		case 7:printf("SUNDAY");break;
		default : printf("Gecersiz gun");break;
	} 
	*/
	
	// 4 iþlem 
	// 1. çözüm
	/*
	int i,a,b;
	printf("Islem yapilacak birinci sayiyi girin.");
	scanf("%d",&a);
	printf("Islem yapilacak ikinci sayiyi girin.");
	scanf("%d",&b);
	
	printf("1 ile 4 arasinda bir sayi girini: ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1: printf("%d ",a+b);
		break;
		case 2: printf("%d ",a-b);
		break;
		case 3: printf("%d ",a*b);
		break;
		case 4: printf("%d ",a/b);
		break;
		default : printf("Gecersiz sayi girdiniz: ");
	}
	*/
	
	// 2.çözüm 
	
	float a,b;
	char op;
	
	printf("Lutfen operator giriniz.\n ");
	scanf("%c",&op);
	
	printf("Lutfen 2 adet sayi giriniz: ");
	scanf("%f%f",&a,&b);
	
	switch(op)
	{
		case '+' :printf("%.2f + %.2f = %.2f ",a,b,a+b);
		break;
		case '-' :printf("%.2f - %.2f = %.2f ",a,b,a-b);
		break;
		case '*' :printf("%.2f * %.2f = %.2f ",a,b,a*b);
		break;
		case '/' :printf("%.2f / %.2f = %.2f ",a,b,a/b);
		break;
		default : printf("Gecersiz operator girdiniz. ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
