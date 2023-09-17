void idade(){
    int anoNascimento, anoAtual, anoFuturo, calculo;
    char pergunta, lixo;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano que você está: ");
    scanf("%d", &anoAtual);

    printf("Você já fez aniversário esse ano? s/n ");
    scanf("%c", &lixo);
    scanf("%c", &pergunta);
        if (pergunta == 's'){
            printf("Sua idade atual é: %d anos\n\n", anoAtual - anoNascimento);
        }else
            printf("Sua idade atual é: %d anos\n\n", anoAtual - anoNascimento - 1);

    printf("Digite um ano para saber a idade que você terá nele: ");
    scanf("%d", &anoFuturo);

    printf("Sua idade em %d será de %d anos", anoFuturo, (anoFuturo - anoNascimento));


}
