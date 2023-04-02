#include <stdio.h>

int main(void){
	int a, b, c;
	
	printf("Insira o valor de a: ");
	scanf("%d", &a);
	printf("Insira o valor de b: ");
	scanf("%d", &b);
	printf("Insira o valor de c: ");
	scanf("%d", &c);
	
	if(a > b){
		if(a > c){
			printf("\nA variavel 'a' eh a maior de todas.\n");
		}else{
			printf("\n'c' eh a maior variavel de todas.\n");
		}
	}else{
		if(b > c){
			printf("\nA variavel 'b' eh a maior de todas.\n");
		}else{
			printf("\n'c' eh a maior variavel de todas.\n");
		}
	}
	
	return 0;
}
