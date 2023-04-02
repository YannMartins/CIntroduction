#include <stdio.h>

int main(void){
	float media1, media2, media3, media4, anual;
	
	printf("Informe a primeira media bimestral: ");
	scanf("%f", &media1);
	printf("Informe a segunda media bimestral: ");
	scanf("%f", &media2);
	printf("Informe a terceira media bimestral: ");
	scanf("%f", &media3);
	printf("Informe a quarta media bimestral: ");
	scanf("%f", &media4);
	
	anual = (media1*1 + media2*2 + media3*3 + media4*4) / 10;
	
	printf("\nA media ponderada atual sera de: %.2f.\n", anual);
	
	return 0;
}
