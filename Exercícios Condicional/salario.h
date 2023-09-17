void salario(){
    double salario, aumento, calculo;

    printf("Digite o seu salário atual: ");
    scanf("%lf", &salario);

    printf("Qual a porcentagem de aumento do seu salário: ");
    scanf("%lf", &aumento);

    calculo = salario + (salario * (aumento/100));

    printf("O seu salário com aumento será de %.2f", calculo);
}
