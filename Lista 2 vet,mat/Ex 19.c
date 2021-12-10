/*19. Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o maior e
valor da matriz.*/
#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaMatriz.h"
int main ()
{
int mat[100][100],i,j,linhas,cols,maiorvalor;
	printf("Quantas linhas e colunas da matriz: ");
	scanf("%d%d",&linhas,&cols);
	leiaMatriz(mat,linhas,cols);
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(mat[i][j]>maiorvalor){
				maiorvalor = mat[i][j];
			}
		}
		}
	mostraMatriz(mat, linhas, cols);
	printf("maior valor da matriz e: %d",maiorvalor);
}
