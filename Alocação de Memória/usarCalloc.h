#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa{
    int CPF;
    char nome [256];
    float salario;
} tpessoa;


 int alocarMemoriaCalloc(int n){
// Alocação dinâmica de memória usando calloc
tpessoa *arrayPessoa = (tpessoa *) calloc(n, sizeof(tpessoa));
if (arrayPessoa == NULL) {
    printf("Falha na alocação de memória.\n");
    return 1;
    }
}

int preencherPessoa(tpessoa *arrayPessoa, int n){
for (int i = 0; i < n; i++) {
    printf("\nDigite o CPF da pessoa %d: ", i + 1);
    scanf("%d", &arrayPessoa[i].CPF);

    printf("Digite o nome da pessoa %d: ", i + 1);
    scanf("%s", &arrayPessoa[i].nome);

    printf("Digite o salário da pessoa %d: ", i + 1);
    scanf("%f", &arrayPessoa[i].salario);
    }
}

int imprimirPessoa(tpessoa * arrayPessoa, int n){
// Imprimir o array
for (int i = 0; i < n; i++) {
    printf("\nDados da pessoa %d:", i +1);
    printf("\nCPF: %d", arrayPessoa[i].CPF);
    printf("\nNome: %s", arrayPessoa[i].nome);
    printf("\nSalario: %.2f\n", arrayPessoa[i].salario);
}

}

