/*2. Dado um vetor A de n números reais, faça um programa para obter o maior e o menor elemento do vetor,
apresente o vetor, maior e menor valor.*/
#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaArray.h"
int main ()
{
	int n, A[100],i,menor=0,maior=0;
	scanf("%d",&n);
	gera(A,n);
	for(i=0;i<n;i++){
		if(maior<A[i]){
		maior = A[i];
	}
		if(menor>A[i]){
		menor = A[i];
	}
}
	printVet(A,n);
	printf("Menor valor: %d",menor);
	printf("Maior valor: %d",maior);
return 0;
}
