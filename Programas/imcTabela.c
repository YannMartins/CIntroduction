#include <stdio.h>

int main(void){
	float peso, h, imc;
	
	printf("Insira o seu peso: ");
	scanf("%f", &peso);
	printf("Insira a sua altura: ");
	scanf("%f", &h);
	
	imc = peso / (h*h);
	
	if(imc <= 18.5){
		printf("\nSua classificacao de acordo com o IMC eh (%.2f): baixo peso.\n", imc);
	}else if ( (18.5 < imc) && (imc <= 25) ){
		printf("\nSua classificacao de acordo com o IMC eh (%.2f): normal.\n", imc);
	}else if ( (25 < imc) && (imc <= 30) ){
		printf("\nSua classificacao de acordo com o IMC eh (%.2f): sobrepeso.\n", imc);
	}else{
		printf("\nSua classificacao de acordo com o IMC eh (%.2f): obesidade.\n", imc);
	}
	
	return 0;
}
