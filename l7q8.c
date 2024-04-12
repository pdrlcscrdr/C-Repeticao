#include<stdio.h> 
#include<locale.h>
//Números primos em um intervalo
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y, p, i, j;
	do{
		printf("Digite o valor inicial do intervalo: \n");
		scanf("%i", &x);
	}while(x <= 0);
	do{
		printf("Digite o valor final do intervalo: \n");
		scanf("%i", &y);
	}while(y < x);
	for(i = x; i <= y; i++){
		p = 0;
		for(j = 1; j <= i; j++){
			if(i % j == 0){
				p++;
			}
		}
		if(p == 2){
			printf("%i ", i);
		}
	}
	return(0);
}