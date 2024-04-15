#include<stdio.h> 
#include<locale.h>
//Fatorial dos ímpares de 1 até 11
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, fat;
	printf("Fatorial dos números ímpares no intervalo de 1 até 11. \n");
	for(n = 1; n <= 11; n = n + 2){
		fat= 1;
		for(i = 1; i <= n; i++){
			fat = fat * i;
		}
		printf("%i! = %i. \n", n, fat);
	}
	return(0);
}
