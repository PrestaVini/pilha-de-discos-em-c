#define TAM_MAX 5
typedef struct _disco {
    char cor[20];
	int diametro;
	float peso;
} Disco;

typedef struct _pilha {
	Disco vetor[TAM_MAX];
	int topo;
} pilha;

void inicializar();
int verificarVazia();
int verificarCheia();
void push(char cor[20], int diametro, float peso);
void imprimir();
Disco pop();
