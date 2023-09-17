int alocarMemoriaMalloc(int n){

 // Aloca��o din�mica de mem�ria usando malloc

int array = (int *) malloc(n * sizeof(int));

if (array == NULL) {
    printf("Falha na aloca��o de mem�ria.\n");
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
