#include <stdio.h>
#include <stdlib.h>
#define MAX 40

void boy(char tab[MAX],int *a)
{
	int i;
	for(i=0;tab[i]!='\0';i++);
	*a=i;
}
void ortak_harf(char tab[MAX],char can[MAX],int *t)
{
	int i,j;
	int kelime1,kelime2;
	*t=0;
	
	boy(tab,&kelime1);
	boy(can,&kelime2);
	
	for(i=0;i<kelime1;i++)
	{
		for(j=0;j<kelime2;j++)
		{
			if(tab[i]==can[j])
			{
				*t=*t+1;
			}
		}
	}
}

int main() {
	
	char cumle[MAX],tab[MAX];
	int i=0;
	int a,r;
	
	printf("Lutfen bir cumle veya kelime giriniz: ");
	do
	{
		scanf("%c",&cumle[i]);
		i++;
	}
	while(cumle[i-1] !='\n');
	cumle[i-1]='\0';
	
	boy(cumle,&a);
	printf("Dizimizin boyu: %d\n",a);
	
	printf("Lutfen iki kelime giriniz: ");
	scanf("%s %s",&cumle,&tab);
	ortak_harf(cumle,tab,&r);
	printf("%s ve %s %d kadar ortak harfe sahiptir\n",cumle,tab,r);
	
	
	
	
	system("COLOR 2");
	return 0;
}
