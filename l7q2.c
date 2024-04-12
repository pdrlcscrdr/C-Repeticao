#include<stdio.h> 
#include<locale.h> 
//Somatório dos pares de 1 até 500
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, s;
	for(i = 1; i <= 500; i++){
		if(i % 2 == 0){
			s = s + i;
		}
	}
	printf("O somatório dos pares de 1 até 500 é: %i \n", s);
	return(0);
}