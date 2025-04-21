#include <stdio.h>


void recursiveTorre(int quantidadeMovimento) {

	if ( quantidadeMovimento > 0) {

		printf("Direita\n");
		recursiveTorre(quantidadeMovimento - 1);
	}
}


void recursiveBispo(int quantidadeMovimento) {
	if (quantidadeMovimento > 0) {

		printf("Cima, Direita\n");
		recursiveBispo(quantidadeMovimento - 1);
	}
}


void recursiveRainha(int quantidadeMovimento) {
	if (quantidadeMovimento > 0) {

		printf("Esquerda\n");
		recursiveRainha(quantidadeMovimento - 1);
	}
}

void movimentoCavalo(int quantidadeMovimento) {

	for (int i = 0; i < 1; i++) {

		int j = 0;
		while(j < quantidadeMovimento) {
			printf("Cima\n");

			j++;
		}

		printf("direita\n");
	}
}

void movimentoBispo(int quantidadeMovimento) {

	for (int i = 1; i <= quantidadeMovimento; i++) {

		for (int j = 0; j < i ; j++) {
			printf("Cima, Direita\n");
		}
	}
}



int main() {


	// movendo a torre para a direita 5 vezes
	printf("movendo a torre a direita\n");
	recursiveTorre(5);


	// movendo o Bispo na diagonal 5 vezes
	printf("Movendo o Bispo na diagonal:\n");
	recursiveBispo(5);

	printf("Movendo a Rainha para a esquerda:\n");
	recursiveRainha(8);



	// implementado o movimento do cavalor 
	printf("\n");
	
	printf("Movendo o Cavalo em L\n");
	movimentoCavalo(2);
	printf("\n");
	
	// movendo o Bispo usando loops aninhados
	printf("movendo o Bispo usando loops aninhados\n");
	movimentoBispo(5);

	return 0;
}
