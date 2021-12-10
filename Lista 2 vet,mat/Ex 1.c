/*1. Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
e o limite do vetor é 100) e apresente a soma de seus elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaArray.h"

int main(){
	int v[100],qtd,i,soma=0;
	printf("Digite a quantidade de elementos para o vetor: ");
	scanf("%d",&qtd);
	gera(v,qtd);
	printVet(v,qtd);
	for(i=0;i<qtd;i++)
	soma+=v[i];
	printf("Soma dos elementos do vetor: %d\n",soma);
	return 0;
}
