void peso(){

float peso, calculo;

printf("Digite seu peso: ");
scanf("%f", &peso);

printf("Se voc� engordar 15 porcento do seu peso, seu novo peso ser�: %.2f", (peso + (peso * 15) / 100));

printf("\nSe voc� engordar 25 porcento do seu peso, seu novo peso ser�: %.2f", (peso + (peso * 25) / 100));

}
