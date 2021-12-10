//27. Calcular a soma de 2 matrizes de mesma ordem.
#include<stdlib.h>
#include"bibliotecaMatriz.h"
int main ()
{

int linhas, cols, i, j;
	int m1[100][100], m2[100][100], m3[100][100];
     scanf("%d", &linhas);
     scanf("%d", &cols);
     if (linhas < 100 && cols < 100)
     {
         for (i = 0; i < linhas; i = i + 1)
             for (j = 0; j < cols; j = j + 1) 
             scanf("%d", &m1[i][j]);
         for (i = 0; i < linhas; i = i + 1)
             for (j = 0; j < cols; j = j + 1) 
			scanf("%d", &m2[i][j]);
         printf("\n");
         for (i = 0; i < linhas; i = i + 1)
         {
             for (j = 0; j < cols; j = j + 1)
             {
                 m3[i][j] = m1[i][j] + m2[i][j];
                 printf("%3d", m3[i][j]);
             }
             printf("\n");
         }
     }
     else printf("Matriz excessivamente grande!\n");
     return 0;
 }
