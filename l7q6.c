#include<stdio.h> 
#include<locale.h>
//Fatorial de um número
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, fat = 1;
	printf("Digite um número:  \n");
	scanf("%i", &n);
	if(n < 0){
		printf("Não existe fatorial de número negativo.");
	}
	else{
		for(i = 1; i <= n; i++){
			fat = fat * i;
		}
		printf("%i! = %i.", n, fat);
	}
	return(0);
	}