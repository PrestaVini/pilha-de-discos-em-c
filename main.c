#include <stdio.h>
#include "discos_pilha.h"

int main(int argc, char *argv[]) {
	Disco temp;
	char cor[20];
	int diametro;
	float peso;
	int opcao;

	inicializar();

	do {
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");

		scanf("%d", &opcao);

		switch(opcao) {
			case 1:
				inicializar();
				break;

			case 2:
				printf("Digite a cor: ");
				scanf("%s", cor);

				printf("Digite o diametro: ");
				scanf("%d", &diametro);

				printf("Digite o peso: ");
				scanf("%f", &peso);

				push(cor, diametro, peso);
				break;

			case 3:
				if (!verificarVazia()) {
					temp = pop();

					printf("\nDisco removido:");
					printf("\nCor: %s", temp.cor);
					printf("\nDiametro: %d", temp.diametro);
					printf("\nPeso: %.2f", temp.peso);
				} else {
					printf("\nA pilha esta vazia!");
				}
				break;

			case 4:
				imprimir();
				break;

			case 5:
				printf("Encerrando o programa...");
				break;

			default:
				printf("\nOpcao invalida.");
		}

	} while(opcao != 5);

	return 0;
}