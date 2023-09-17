typedef struct veiculo{
    int chassi;
    char marca [256];
    char modelo [256];
    float preco;
}tveiculo;

int alocarMemoriaMallocVeiculo(int n){
// Alocação dinâmica de memória usando malloc
    tveiculo *arrayVeiculo = (tveiculo *) malloc(n * sizeof(tveiculo));

    if (arrayVeiculo == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
}

int preencherVeiculo (tveiculo *arrayVeiculo, int n){
// Preencher o array
    for (int i = 0; i < n; i++) {
    printf("\nDigite o chassi do veículo %d: ", i + 1);
    scanf("%d", &arrayVeiculo[i].chassi);

    printf("Digite a marca do veículo %d: ", i + 1);
    scanf("%s", &arrayVeiculo[i].marca);

    printf("Digite o modelo do veículo %d: ", i + 1);
    scanf("%s", &arrayVeiculo[i].modelo);

    printf("Digite o preço do veículo %d: ", i + 1);
    scanf("%f", &arrayVeiculo[i].preco);
    }
}

int imprimirVeiculo(tveiculo *arrayVeiculo, int n){
// Imprimir o array
    printf("\nArray (antes da realocação): ");

    for (int i = 0; i < n; i++) {
    printf("\nDados do veículo %d\n", i + 1);
    printf("Chassi: %d\n", arrayVeiculo[i].chassi);
    printf("Marca: %s\n", arrayVeiculo[i].marca);
    printf("Modelo: %s\n", arrayVeiculo[i].modelo);
    printf("Preço: %.2f\n", arrayVeiculo[i].preco);
    }
}
int realocarArrayVeiculo(tveiculo *arrayVeiculo, int novoTamanho){
// Realocar o array para um tamanho maior
    arrayVeiculo = (tveiculo *) realloc(arrayVeiculo, novoTamanho * sizeof(tveiculo));
    if (arrayVeiculo == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }
}

int elementosAdicionais(tveiculo * arrayVeiculo, int novoTamanho, int n){
// Preencher os elementos adicionais
    for (int i = n; i < novoTamanho; i++) {
        printf("\nDigite o chassi do veículo %d: ", i + 1);
        scanf("%d", &arrayVeiculo[i].chassi);

        printf("Digite a marca do veículo %d: ", i + 1);
        scanf("%s", &arrayVeiculo[i].marca);

        printf("Digite o modelo do veículo %d: ", i + 1);
        scanf("%s", &arrayVeiculo[i].modelo);

        printf("Digite o preço do veículo %d: ", i + 1);
        scanf("%f", &arrayVeiculo[i].preco);
    }
}

int imprimirArrayRealocado(tveiculo *arrayVeiculo, int novoTamanho){
// Imprimir o array após a realocação
    printf("\nArray (após a realocação): ");

    for (int i = 0; i < novoTamanho; i++) {
    printf("\nDados do veículo %d\n", i + 1);
    printf("Chassi: %d\n", arrayVeiculo[i].chassi);
    printf("Marca: %s\n", arrayVeiculo[i].marca);
    printf("Modelo: %s\n", arrayVeiculo[i].modelo);
    printf("Preço: %.2f\n", arrayVeiculo[i].preco);
    }
}


