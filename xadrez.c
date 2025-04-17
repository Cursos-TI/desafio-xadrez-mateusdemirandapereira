#include <stdio.h>

int main() {


	// movendo a torre para a direita 5 vezes
	printf("Movendo a Torre na horizontal:\n");
	for (int i = 0; i < 5; i++) {

		printf("Direita\n");
	}

	// movendo o Bispo na diagonal 5 vezes
	int i = 0;
	printf("Movendo o Bispo na diagonal:\n");
	while(i < 5) {

		printf("Cima, Direita\n");

		i = i + 1;
	}


	printf("Movendo a Rainha para a esquerda:\n");
	int j = 0;

	do {
		printf("Esquerda\n");
		j = j + 1;

	} while (j < 8);


	return 0;
}
