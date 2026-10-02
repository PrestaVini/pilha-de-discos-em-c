# Pilha de Discos em C

## Tema

Pilha (LIFO), structs e organização do código em arquivos.

## Enunciado da Atividade

Escreva um programa em linguagem C que implemente uma pilha de discos, ou seja, insira, imprima e remova discos conforme a estratégia LIFO. Os seguintes dados sobre cada disco deve ser guardado: cor (conjunto de 20 caracteres), diâmetro em centímetros (número inteiro) e peso (um número real).

Obs.: você pode usar como base o código da pilha para números inteiros pilhaInteiros.c .

Obs.: defina uma estrutura (struct) para representar um disco.

## O que faz

O programa representa cada disco com a estrutura `Disco`, que armazena cor, diâmetro e peso. A estrutura `pilha` possui um vetor com capacidade para cinco discos e um índice que indica o topo.

A remoção segue a estratégia **LIFO (Last In, First Out)**: o último disco inserido é o primeiro a ser removido.

O menu oferece as opções:

| Opção | Funcionamento |
|---|---|
| 1 — Inicializar | Esvazia logicamente a pilha, redefinindo o topo. |
| 2 — Inserir | Solicita cor, diâmetro e peso e tenta inserir o disco no topo. |
| 3 — Remover | Retira o disco do topo e exibe seus dados. |
| 4 — Imprimir | Exibe cores, diâmetros, pesos e índices, da base até o topo. |
| 5 — Sair | Encerra o programa. |

O programa verifica se a pilha está cheia ou vazia antes das operações correspondentes.

### Regra adicional implementada

Além do enunciado, o código exige que cada novo disco tenha diâmetro **menor** que o disco do topo. Discos com diâmetro maior ou igual são recusados. O primeiro disco pode ser inserido quando a pilha estiver vazia.

Por exemplo, ao inserir discos de diâmetros 30, 20 e 10 cm, a primeira remoção retira o disco de 10 cm.

## Tecnologias Usadas

- Linguagem C;
- Structs e vetor de estruturas;
- Pilha com operações `push` e `pop`;
- Funções e separação em arquivos `.c` e `.h`;
- Estruturas condicionais e laços de repetição;
- Biblioteca `stdio.h` para entrada e saída;
- Biblioteca `string.h`, com uso de `strcpy`;
- OnlineGDB para compilação e execução.

## Arquivos do Projeto

| Arquivo | Responsabilidade |
|---|---|
| `main.c` | Menu, leitura dos dados e chamadas das funções da pilha. |
| `discos_pilha.h` | Estruturas, capacidade máxima e declarações das funções. |
| `discos_pilha.c` | Implementação da inicialização, verificações, inserção, impressão e remoção. |

Os nomes dos arquivos recebidos foram ajustados para corresponder aos `#include` do programa. O conteúdo dos códigos foi preservado.

## Como executar o código

### Pelo OnlineGDB

1. Acesse [OnlineGDB](https://www.onlinegdb.com/) e selecione a linguagem **C**.
2. Coloque o conteúdo de `main.c` no arquivo principal do editor.
3. Adicione os arquivos `discos_pilha.c` e `discos_pilha.h` ao mesmo projeto, mantendo esses nomes e copiando seus respectivos conteúdos.
4. Compile os dois arquivos `.c` juntos; o arquivo `.h` é incluído pelo código.
5. Clique em **Run**.
6. Escolha as opções do menu e informe os dados solicitados.
7. Digite **5** para encerrar.

Para os testes, informe cores sem espaços e com até **19 caracteres**, pois `char cor[20]` também precisa armazenar o terminador da string. O código original usa `scanf("%s", cor)` sem limitar a leitura, portanto não impede entradas maiores. Use um número inteiro para o diâmetro e ponto como separador decimal do peso, por exemplo `1.5`.

### Pelo terminal com GCC

Na pasta dos três arquivos, compile:

```bash
gcc main.c discos_pilha.c -o pilha_discos
```

Execute no Linux/macOS:

```bash
./pilha_discos
```

Ou, no PowerShell do Windows:

```powershell
.\pilha_discos.exe
```
