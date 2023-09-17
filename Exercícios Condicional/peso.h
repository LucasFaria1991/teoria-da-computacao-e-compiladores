void peso(){

float peso, calculo;

printf("Digite seu peso: ");
scanf("%f", &peso);

printf("Se você engordar 15 porcento do seu peso, seu novo peso será: %.2f", (peso + (peso * 15) / 100));

printf("\nSe você engordar 25 porcento do seu peso, seu novo peso será: %.2f", (peso + (peso * 25) / 100));

}
