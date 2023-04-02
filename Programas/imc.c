#include <stdio.h>

int main(void){
	float peso, altura, imc;
	
	printf("Iremos lhe informar o seu Indice de Massa Corporal (IMC) \nPara isso precisaremos que voce nos informe o seu peso e a sua altura\n");
	printf("\nPeso = ");
	scanf("%f", &peso);
	printf("Altura = ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	printf("\nCom o peso e altura que foi informado, o seu IMC eh de: %.2f\n", imc);
	
	return 0;
}
