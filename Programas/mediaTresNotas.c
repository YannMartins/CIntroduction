#include <stdio.h>

int main(void){
	float nota1, nota2, nota3;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	printf("\nA media das notas informadas eh: %.2f\n", media);
	
	return 0;
}
