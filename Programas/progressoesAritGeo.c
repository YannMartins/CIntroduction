#include <stdio.h>

int main(void){
    char tipo;
    int t1, r, n;
    int soma, t, i;

    printf("Digite o tipo de progressao (a ou g): ");
    scanf("%c", &tipo);
    printf("Digite o valor do primeiro termo: ");
    scanf("%d", &t1);
    printf("Digite a razao: ");
    scanf("%d", &r);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    soma = 0;
    t = t1;
    
    for (i = 1; i <= n; i = i + 1){
            printf("termo %d: %d\n", i, t);
            soma = soma + t;

            if (tipo == 'a'){
                t = t + r;
            }else{
                t = t * r;
            }
    }

    printf("\nSoma dos termos: %d\n", soma);

	return 0;
}
