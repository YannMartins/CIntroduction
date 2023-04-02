#include <stdio.h>

int main(void){
	int idade;
	
	printf("Insira a sua idade: ");
	scanf("%d", &idade);
	
	if (idade <= 0){
		printf("\nA idade inserida tem que ser maior que 0.\n");
		return 1;
	}
	if (idade < 21){
		printf("\nVoce eh jovem!\n");
	}else if ( (21 <= idade) && (idade < 60) ){
			printf("\nVoce eh adulto!\n");
		}
		else{
			printf("\nVoce eh uma pessoa idosa!\n");
		}
		
	return 0;
}
