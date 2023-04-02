#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, certo, quant;

	srand(time(NULL));
	certo = rand() % 100;
	palpite = -1;
	quant = 0;
	
	while (palpite != certo && quant < 5) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        quant = quant + 1;

        if (palpite > certo){
            puts("Palpite alto!");
        }else if (palpite < certo){
            puts("Palpite foi baixo!");
        }
	}
    if (palpite == certo){
        printf("\nVoce acertou com %d palpites!\n", quant);
    }else{
        printf("\nVoce atingiu a quantia maxima de palpites: %d palpites!\n", quant);
    }

	return 0;
}
