#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int can[2][2]={{4,6},{2,3}};
	
	printf("%d",can[1][0]);
	*/
	

	// Birim matris yapma
	
	/*
	int mat[10][10];
	int i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			{
				mat[i][j]=1;
			}
			else
			{
				mat[i][j]=0;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
	*/
	
	//N*P eleman içeren 2 matrisin elemanlarýný toplayan bir program.sonucu 3. bir matrise yazdýr.
	
	int dizi1[3][4]={{1,5,4,2},{9,4,3,0},{7,1,4,8}};
	int dizi2[3][4]={{5,2,6,1},{5,1,8,9},{7,4,3,2}};
	int toplam[3][4];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			toplam[i][j]=dizi1[i][j] + dizi2[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",toplam[i][j]);
		}
		printf("\n");
	}		
	
	
	
	
	
	
	
	
	
	
	return 0;
}
