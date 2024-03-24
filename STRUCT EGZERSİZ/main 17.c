#include <stdio.h>
#include <stdlib.h>
#define N 5

void bastirma(int matris[N][N])
{
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%4d",matris[i][j]);
		}
		printf("\n"); 
	}
}
void simetrik(int matris[N][N],int *deger)
{
	*deger=1;
	
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			if(matris[i][j] != matris[j][i])
			{
				*deger=0;
			}
		}
	}
}
void diagonal(int matris[N][N],int *diagonalmi)
{
	*diagonalmi=1;
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i!=j && matris[i][j]!=0)
			{
				*diagonalmi=0;
			}
		}
	}
}


int main() {
	
	int d,e;
	int matris[N][N]=
	{
		{2,0,0,0,0},
		{0,6,0,0,0},
		{0,0,2,0,8},
		{0,0,0,7,0},
		{0,0,8,0,4}
	};
	
	bastirma(matris);
	simetrik(matris,&d);
	if(d==1)
	{
		printf("Bu matris simetriktir: \n");
	}
	else
	{
		printf("Bu matris simetrik degildir: \n");
	}
	
	diagonal(matris,&e);
	if(e==1)
	{
		printf("Bu matris diagonaldir: \n");
	}
	else
	{
		printf("Bu matris diagonal degildir: \n");
	}
	
	system("COLOR ");
	return 0;
}
