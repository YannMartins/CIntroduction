#include <stdio.h>

int main(void){
	int b, h;
	float area;

	printf("Calculo da area de um triangulo:\n");
	printf("\nInforme a base do triangulo: ");
	scanf("%d", &b);
	printf("Informe a altura do triangulo: ");
	scanf("%d", &h);
		
	area = (b * h) / 2.0;
	
	printf("\nCom isso obtemos que a area do triangulo eh igual a: %.2f\n", area);
	
	return 0;
}
