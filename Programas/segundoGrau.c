#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, delta, x1, x2;
	
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b);
	printf("Insira o valor de c: ");
	scanf("%f", &c);
	
	if(a == 0){
		printf("\nNao podemos formar uma equacao de segundo grau com a=0.\n");
		return 1;
	}
	
	delta = (b *b) - 4*a*c;
	
	if(delta < 0){
		printf("\nAs raizes reais de delta sao menores do que 0.\n");
		return 2;
	}else{
		printf("\nAs raizes reais de delta sao maiores do que 0, sendo assim: \n");
		
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		
		if (delta == 0){
			printf("\nA raiz unica serah: %.2f.\n", x1);
		}else{
			printf("\nO valor da raiz x1 eh: %.2f e da raiz x2: %.2f.\n", x1, x2);
		}
	}
	
	return 0;
}
