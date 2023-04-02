#include <stdio.h>

int main(void){
	int valor, hora, minuto, segundo, resto;
	
	printf("Informe o tempo em segundos: ");
	scanf("%d", &valor);
	
	hora = valor / 3600;
	resto = valor % 3600;
	
	minuto = resto / 60;
	resto = resto % 60;
	
	segundo = resto;
	
	printf("\n%d segundos equivale a: %d horas, %d minutos e %d segundos.\n", valor, hora, minuto, segundo);
	
	return 0;
}
