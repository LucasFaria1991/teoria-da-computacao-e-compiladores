void dolar(){
    double dolar, cotacao;
    printf("Digite a cota��o do Dolar atual: ");
    scanf("%lf", &cotacao);

    printf("Digite quantos d�lares voc� tem: ");
    scanf("%lf,", &dolar);


    printf("\n\nVoc� possui %.2f reais.\n\n", (dolar*cotacao));
}
