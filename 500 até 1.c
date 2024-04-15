#include<stdio.h> 
#include<locale.h>
// 500 até 1 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int cont = 500;
	printf("500 até 1:\n");
	while(cont >= 1){
		printf("%i ", cont);
		cont --;
	}
	return(0);
}
