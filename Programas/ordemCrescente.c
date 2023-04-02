#include <stdio.h>

int main(void){
	
	int i, x, y, res;
	
	printf("Insira o valor de x: ");
	scanf("%d", &x);
	printf("Insira o valor de y: ");
	scanf("%d", &y);
	
	if (x > y){
		res = x;
		x = y;
		y = res;
	} 
	
	i = x;
	
	while(i <= y){
		printf("%d\n", i);
		i = i + 1;
	}
	
	return 0;
}
