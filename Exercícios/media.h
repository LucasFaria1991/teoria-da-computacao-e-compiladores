void media(){
    float num1, num2, num3, media, soma;

    printf("Digite um n�mero: ");
    scanf("%f", &num1);

    printf("Digite outro n�mero: ");
    scanf("%f", &num2);

    printf("Digite outro n�mero: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;

    printf("%.2f", media);

}
