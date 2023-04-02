#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, certo, quant;

	srand(time(NULL));
	certo = rand() % 100;
	palpite = -1;
	quant = 0;
	
	while (palpite != certo) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        quant = quant + 1;
        
        if (palpite > certo){
            puts("Palpite alto!");
        }else if (palpite < certo){
            puts("Palpite foi baixo!");
        }
	}

    printf("\nVoce precisou de %d palpites para acertar!\n", quant);

	return 0;
}
