#include<stdlib.h>
#include"bibliotecaMatriz.h"
int main ()
{
int mat[100][100],i,j,linhas,cols,menorvalor=04;
	printf("Quantas linhas e colunas da matriz: ");
	scanf("%d%d",&linhas,&cols);
	leiaMatriz(mat,linhas,cols);
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(mat[i][j]<menorvalor){
				menorvalor = mat[i][j];
			}
		}
		}
	mostraMatriz(mat, linhas, cols);
	printf("menor valor da matriz e: %d",menorvalor);
}
