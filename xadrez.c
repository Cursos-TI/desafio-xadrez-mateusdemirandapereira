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




	// implementado o movimento do cavalor 
	printf("\n");
	
	printf("Movendo o Cavalo em L\n");

	int numeroCasasBaixo = 2;

	int numeroCasasEsquerda = 1;

	for (int i = 1; i<=1; i++) {

		// implementado o movimento para baixo
		int j = 1;
		while(j <= numeroCasasBaixo) {

			printf("%s\n", "baixo");

			j = j +1;
		}

		// implementado o movimento para a esquerda
		int y = 1;

		do {

			printf("%s\n", "esquerda");

			y = y + 1;
		} while (y <= numeroCasasEsquerda);



	}

	return 0;
}
