#include <stdio.h>

int main (void){
	float a, b;
	
	printf("Insira um numero (a): ");
	scanf("%f", &a);
	printf("Insira um segundo numero (b): ");
	scanf("%f", &b);
	
	if (a > b){
		printf("\n%.2f eh o menor numero.\n", b);
	}else{
		printf("\n%.2f eh o menor numero.\n", a);
	}
	
	return 0;
}
