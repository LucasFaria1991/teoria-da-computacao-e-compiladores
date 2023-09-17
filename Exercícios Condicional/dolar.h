void dolar(){
    double dolar, cotacao;
    printf("Digite a cotação do Dolar atual: ");
    scanf("%lf", &cotacao);

    printf("Digite quantos dólares você tem: ");
    scanf("%lf,", &dolar);


    printf("\n\nVocê possui %.2f reais.\n\n", (dolar*cotacao));
}
