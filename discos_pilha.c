#include <stdio.h>
#include <string.h>
#include "discos_pilha.h"

pilha p;

void inicializar() {
	p.topo = -1;
}

int verificarVazia() {
	if (p.topo == -1)
		return 1;
	else
		return 0;
}

int verificarCheia() {
	if (p.topo == TAM_MAX-1)
		return 1;
	else
		return 0;
}

void push(char cor[], int diametro, float peso) {
	if (!verificarCheia()) {
		if (p.topo == -1 || p.vetor[p.topo].diametro > diametro) {
			p.topo++;
			strcpy(p.vetor[p.topo].cor, cor);
			p.vetor[p.topo].diametro = diametro;
			p.vetor[p.topo].peso = peso;
		} else 
		    printf("O disco anterior tem diametro menor!\n");
	} else 
		printf("\nErro! A pilha ja esta cheia");
}

void imprimir() {
	if (!verificarVazia()) {
		printf("Cores: ");
		for (int i = 0; i <= p.topo; i++) {
			printf("%s  ", p.vetor[i].cor);
		}
		printf("\nDiametros: ");
		for (int i = 0; i <= p.topo; i++) {
			printf("%d  ", p.vetor[i].diametro);
		}
		printf("\nPesos: ");
		for (int i = 0; i <= p.topo; i++) {
			printf("%.2f  ", p.vetor[i].peso);
		}
		printf("\n");
		printf("Enderecos: ");
		for (int i = 0; i <= p.topo; i++) {
			printf("Endereco: %d ", i);
		}
	} else
		printf("A pilha esta vazia!");
}

Disco pop() {
	if (!verificarVazia()) {
		Disco aux;
		aux = p.vetor[p.topo];
		p.topo--;
		return aux;
	} else {
		Disco vazio = {"", 0, 0};
		printf("Erro! A pilha esta vazia");
		return vazio;
	}
}
