#include <stdio.h>

int main(void){
	float diametro, raio, area, circunferencia;
	
	printf("Insira o valor do diametro: ");
	scanf("%f", &diametro);
	
	raio = diametro / 2;
	area = 3.1416 * (raio * raio);
	circunferencia = 2 * 3.1416 * raio;
	
	printf("\nO valor das medidas de um circulo que possui o diametro %.2f, serah: ", diametro);
	printf("\n\ndiametro = %.2f \nraio = %.2f \narea = %.2f \ncircunferencia = %.2f\n", diametro, raio, area, circunferencia);
	
	return 0;
}
