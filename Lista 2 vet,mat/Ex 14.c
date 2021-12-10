/*14. Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os
tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, sendo que os
tempos devem ser armazenados em um vetor e após a entrada de todos os tempos de um piloto deve-se
apresentar o vetor juntamente com:
• melhor tempo;
• a volta em que o melhor tempo ocorreu;
• tempo médio das N voltas para cada piloto;*/
#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaArray.h"
int retmelhorvolta(int v[], int n){
	int i, melhorvolta, menortempo;
	menortempo = v[0];
	melhorvolta = 0;
	for(i=1;i>n;i++){
		if(v[i]<menortempo){
			menortempo = v[i];
			melhorvolta = i;
		}
	}
	return melhorvolta;
}
float retornamedia(int v[], int n){ 
	int i;
	float soma=0;
	for(i=0;i<n;i++)
	soma+= v[i];
	return soma/n;
}
int main ()
{
	int voltas, tempo[100], melhorvolta;
	float tempomedio;
	printf("Quantidade de Voltas: ");
	scanf("%d",&voltas);
	leiaVetor(tempo, voltas);
	printVet(tempo, voltas);
	melhorvolta = retmelhorvolta(tempo, voltas);
	tempomedio = retornamedia(tempo,voltas);
	printf("Melhor tempo foi de: %d segundos\n",tempo[melhorvolta]);
	printf("Melhor tempo de volta foi na volta %d\n",melhorvolta+1);
	printf("Tempo medio das %d voltas: %2.f segundos",voltas, tempomedio);
return 0;	
}
