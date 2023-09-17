#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\lsfar\Documents\Programas em C\AlocacaoMemoria\funcaoMalloc.h"
#include "C:\Users\lsfar\Documents\Programas em C\AlocacaoMemoria\usarCalloc.h"
#include "C:\Users\lsfar\Documents\Programas em C\AlocacaoMemoria\usarRealloc.h"

int main()
{
    setlocale(LC_ALL, "portuguese");

    int escolha;

    printf("Digite sua escolha: \n");
    printf("1-Malloc em função.\n");
    printf("2- Estrutura pessoa com Malloc\n");
    printf("3- Realocar Memória\n");
    scanf("%d", &escolha);

    int *array, n, novoTamanho;
    tpessoa *arrayPessoa;
    tveiculo *arrayVeiculo;
    tveiculo *arrayVeiculoNovo;


    switch (escolha){
        case 1:
            printf("\nDigite o tamanho do array: ");
            scanf("%d", &n);

            //Chamar funções
            array = alocarMemoriaMalloc(n);
            preencherArray(array, n);
            imprimirArray(array, n);

            // Liberar a memória alocada com malloc
            free(array);

            return 0; break;


        case 2:
            printf("\nDigite o tamanho do array: ");
            scanf("%d", &n);

            arrayPessoa = alocarMemoriaCalloc(n);
            preencherPessoa(arrayPessoa, n);
            imprimirPessoa(arrayPessoa, n);


            // Liberar a memória alocada com calloc
            free(arrayPessoa);
            return 0; break;

        case 3:
            printf("Digite o tamanho inicial do array: ");
            scanf("%d", &n);

            tveiculo* arrayVeiculo = alocarMemoriaMallocVeiculo(n);
            preencherVeiculo(arrayVeiculo, n);
            imprimirVeiculo(arrayVeiculo, n);

            printf("Digite o novo tamanho: ");
            scanf("%d", &novoTamanho);

            arrayVeiculo =realocarArrayVeiculo(arrayVeiculo, novoTamanho);
            elementosAdicionais(arrayVeiculo, novoTamanho, n);
            imprimirArrayRealocado(arrayVeiculo, novoTamanho);

            // Liberar a memória alocada
            free(arrayVeiculo);

            return 0; break;

        default:
            printf("Entrada inválida");
}



}
