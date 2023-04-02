#include <stdio.h>

int main(void){
	
	int n, maior, menor, valor;
	
	n = -1;
	valor = 1;
	
	while(n != 0){
		printf("Insira o valor de n: ");
		scanf("%d", &n);
		if (valor == 1){
			maior = n;
			menor = n;
			valor = 0;
		}
		if (n > maior && n != 0){
			maior = n;
		}
		if (n < menor && n != 0){
			menor = n;
		}
	}
	
	printf("\nMaior valor: %d\nMenor valor: %d\n", maior, menor);
	
	return 0;
}
