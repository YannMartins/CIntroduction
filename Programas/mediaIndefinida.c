#include <stdio.h>

int main(void){
	int n, val, quant;
	float media;
	
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	
	val = n;
	quant = 0;
	
	while(n != 0){
		quant = quant + 1;
		printf("Insira o valor de n: ");
		scanf("%d", &n);
		val = val + n;
	} 
	
	if (quant > 0){
		media = 1.0*val / quant;
		printf("\nA media dos valores eh: %.2f\n", media);
	}
	
	return 0;
}
