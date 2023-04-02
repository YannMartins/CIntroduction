#include <stdio.h>

int main(void){
	int valor, quant, resto, cedulas;
	
	printf("Informe o valor total: ");
	scanf("%d", &valor);
	
	quant = valor / 100;
	resto = valor % 100;
	
	printf("\n%d cedulas de 100.\n", quant);
	
	valor = resto; 
	quant = valor / 50;
	resto = valor % 50;
	
	printf("%d cedulas de 50.\n", quant);
	
	valor = resto; 
	quant = valor / 20;
	resto = valor % 20;
	
	printf("%d cedulas de 20.\n", quant);
	
	valor = resto; 
	quant = valor / 10;
	resto = valor % 10;
	
	printf("%d cedulas de 10.\n", quant);
	
	valor = resto; 
	quant = valor / 5;
	resto = valor % 5;
	
	printf("%d cedulas de 5.\n", quant);
	
	valor = resto; 
	quant = valor / 2;
	resto = valor % 2;
	
	printf("%d cedulas de 2.\n", quant);
	
	valor = resto; 
	quant = valor / 1;
	resto = valor % 1;
	
	printf("%d cedulas de 1.\n", quant);
	
	return 0;
}
