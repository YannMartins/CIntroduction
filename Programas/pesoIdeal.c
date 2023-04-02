#include <stdio.h>

int main (void){
	char s;
	float h, ideal;
	
	printf("Insira o seu sexo (M-Masculino, F-Feminino): ");
	scanf("%c", &s);
	printf("Insira a sua altura em metros: ");
	scanf("%f", &h);
	
	if (s == 'M'){
		ideal = (72.7 * h) - 58;
	}if (s == 'F'){
		ideal = (62.1 * h) - 44.7;
	}
	printf("\nO seu peso ideal eh de %.2fkg.\n", ideal);
	
	return 0;
}
