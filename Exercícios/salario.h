void salario(){
    double salario, aumento, calculo;

    printf("Digite o seu sal�rio atual: ");
    scanf("%lf", &salario);

    printf("Qual a porcentagem de aumento do seu sal�rio: ");
    scanf("%lf", &aumento);

    calculo = salario + (salario * (aumento/100));

    printf("O seu sal�rio com aumento ser� de %.2f", calculo);
}
