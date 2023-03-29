#include<stdio.h>
int main(){
	int e[5];
	int md,est,i;
	int sum = 0;
	
	printf("Por favor, insira o numero de alunos:");
	scanf("%d",&est);
	
	for(i=0;i<est;i++){
		printf("Insira a pontuaçao do aluno:");
		scanf("%d",&e[i]);
	}
	
	for(i=0;i<est;i++)

	   sum += e[i];
	md = sum/est;
	
	printf("A media de notas dos alunos é %d \n",md);
	} 