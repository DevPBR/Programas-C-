#include<stdio.h>
int main(){
	int e[5];
	int md,est,i;
	int sum = 0;
	
	printf("Por favor, insira o número de alunos:");
	scanf("%d",&est);
	
	for(i=0;i<est;i++){
		printf("Insira a pontuação do aluno:");
		scanf("%d",&e[i]);
	}
	
	for(i=0;i<est;i++)

	   sum += e[i];
	average = sum/est;
	
	printf("A média de notas dos alunos é %d \n",average);
	} 