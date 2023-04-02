#include <stdio.h>

int main(void){
	float a, b;
	
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b);
	
	if(a == b){
		printf("\nOs valores de a e b sao iguais.\n");
	}else{
		if(a > b){
			printf("\nO valor de 'a'' eh maior do que o valor de 'b''.\n");
		}else{
			printf("\nO valor de 'b' eh maior do que o valor de 'a'.\n");
		}
	}
	
	return 0;
}
