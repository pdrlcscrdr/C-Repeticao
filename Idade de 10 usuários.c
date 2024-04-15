#include<stdio.h> 
#include<locale.h>
// Perguntando a idade 10 vezes
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, cont;
	for(cont = 1; cont <= 10; cont ++){
		printf("Informe sua idade.\n");
		scanf("%i", &i);
		if(i >= 18){
			printf("Você é maior de idade.\n");
		}
		else{
			printf("Você é menor de idade.\n");
		}
	}
	return(0);
}
