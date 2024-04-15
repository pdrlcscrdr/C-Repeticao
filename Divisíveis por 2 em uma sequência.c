#include<stdio.h> 
#include<locale.h>
// Divisíveis por 2 entre 10-50
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, s = 0;
	printf(" Divisíveis por 2 entre 10-50 \n");
	for(i = 10; i <= 50; i++){
		if(i % 2 == 0){
			printf("%i \n", i);
			s++;
		}
	}
	printf("Foram exibidos %i valores. \n", s);
	return(0);
}
	
