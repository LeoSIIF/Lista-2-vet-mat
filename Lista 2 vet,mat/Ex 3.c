/*3. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
impares existem no vetor. Apresente o vetor e a quantidade de impares no final*/
#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaArray.h"
int main ()
{
	int qtd,v[100],imp=0,i;
	scanf("%d",&qtd);
	gera(v,qtd);
	for(i=0;i<qtd;i++){
		 if (v[i] % 2 == 1){
		 	imp++;
	}//if
} // for
		printVet(v,qtd);
		printf("Impares: %d",imp);
}
