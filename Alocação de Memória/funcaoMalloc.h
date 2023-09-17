int alocarMemoriaMalloc(int n){

 // Alocação dinâmica de memória usando malloc

int array = (int *) malloc(n * sizeof(int));

if (array == NULL) {
    printf("Falha na alocação de memória.\n");
    return 1;
    }
}

int preencherArray(int *array, int n){
// Preencher o array
for (int i = 0; i < n; i++) {
    array[i] = i * 10;
    }
}

int imprimirArray(int *array, int n){
// Imprimir o array
printf("Array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
    }
}
