typedef struct veiculo{
    int chassi;
    char marca [256];
    char modelo [256];
    float preco;
}tveiculo;

int alocarMemoriaMallocVeiculo(int n){
// Aloca��o din�mica de mem�ria usando malloc
    tveiculo *arrayVeiculo = (tveiculo *) malloc(n * sizeof(tveiculo));

    if (arrayVeiculo == NULL) {
        printf("Falha na aloca��o de mem�ria.\n");
        return 1;
    }
}

int preencherVeiculo (tveiculo *arrayVeiculo, int n){
// Preencher o array
    for (int i = 0; i < n; i++) {
    printf("\nDigite o chassi do ve�culo %d: ", i + 1);
    scanf("%d", &arrayVeiculo[i].chassi);

    printf("Digite a marca do ve�culo %d: ", i + 1);
    scanf("%s", &arrayVeiculo[i].marca);

    printf("Digite o modelo do ve�culo %d: ", i + 1);
    scanf("%s", &arrayVeiculo[i].modelo);

    printf("Digite o pre�o do ve�culo %d: ", i + 1);
    scanf("%f", &arrayVeiculo[i].preco);
    }
}

int imprimirVeiculo(tveiculo *arrayVeiculo, int n){
// Imprimir o array
    printf("\nArray (antes da realoca��o): ");

    for (int i = 0; i < n; i++) {
    printf("\nDados do ve�culo %d\n", i + 1);
    printf("Chassi: %d\n", arrayVeiculo[i].chassi);
    printf("Marca: %s\n", arrayVeiculo[i].marca);
    printf("Modelo: %s\n", arrayVeiculo[i].modelo);
    printf("Pre�o: %.2f\n", arrayVeiculo[i].preco);
    }
}
int realocarArrayVeiculo(tveiculo *arrayVeiculo, int novoTamanho){
// Realocar o array para um tamanho maior
    arrayVeiculo = (tveiculo *) realloc(arrayVeiculo, novoTamanho * sizeof(tveiculo));
    if (arrayVeiculo == NULL) {
        printf("Falha na realoca��o de mem�ria.\n");
        return 1;
    }
}

int elementosAdicionais(tveiculo * arrayVeiculo, int novoTamanho, int n){
// Preencher os elementos adicionais
    for (int i = n; i < novoTamanho; i++) {
        printf("\nDigite o chassi do ve�culo %d: ", i + 1);
        scanf("%d", &arrayVeiculo[i].chassi);

        printf("Digite a marca do ve�culo %d: ", i + 1);
        scanf("%s", &arrayVeiculo[i].marca);

        printf("Digite o modelo do ve�culo %d: ", i + 1);
        scanf("%s", &arrayVeiculo[i].modelo);

        printf("Digite o pre�o do ve�culo %d: ", i + 1);
        scanf("%f", &arrayVeiculo[i].preco);
    }
}

int imprimirArrayRealocado(tveiculo *arrayVeiculo, int novoTamanho){
// Imprimir o array ap�s a realoca��o
    printf("\nArray (ap�s a realoca��o): ");

    for (int i = 0; i < novoTamanho; i++) {
    printf("\nDados do ve�culo %d\n", i + 1);
    printf("Chassi: %d\n", arrayVeiculo[i].chassi);
    printf("Marca: %s\n", arrayVeiculo[i].marca);
    printf("Modelo: %s\n", arrayVeiculo[i].modelo);
    printf("Pre�o: %.2f\n", arrayVeiculo[i].preco);
    }
}


