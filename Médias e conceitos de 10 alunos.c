#include<stdio.h> 
#include<locale.h>
//Médias e conceitos de 10 alunos
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, m; 
	int cont, i = 1;
	//Laço de repetição para coletar as notas e informar a média e o conceito de 10 alunos 
	inicio:
	printf("%dº Aluno:\n\n", i++);
	for(cont = 1; cont <= 10; cont ++){
		printf("Digite a %dº nota:\n", cont++);
		scanf("%f", &n1);
		printf("Digite a %dº nota:\n", cont++);
		scanf("%f", &n2);
		printf("Digite a %dº nota:\n", cont++);
		scanf("%f", &n3);
		m = (n1 + n2 + n3) / 3;
		if(m >= 9){
			printf("Sua média foi %.1f, e o conceito obtido foi A.\n", m);
		}
		else if(m >= 7 && m < 9){
			printf("Sua média foi %.1f, e o conceito obtido foi B.\n", m);
		}
		else if(m >= 6 && m < 7){
			printf("Sua média foi %.1f, e o conceito obtido foi C.\n", m);
		}
		else if(m >= 4 && m < 6){
			printf("Sua média foi %.1f, e o conceito obtido foi D.\n", m);
		}
		else{
			printf("Sua média foi %.1f, e o conceito obtido foi E.\n", m);
		}
		printf("\nProximo Aluno:\n\n");
		goto inicio;
		//utilizei o "goto" para fazer com que o comando se repita. Se quiser tirar o laço "for" também funcionará.
	}
	return(0);
	}
