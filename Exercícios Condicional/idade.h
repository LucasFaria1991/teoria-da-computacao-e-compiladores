void idade(){
    int anoNascimento, anoAtual, anoFuturo, calculo;
    char pergunta, lixo;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano que voc� est�: ");
    scanf("%d", &anoAtual);

    printf("Voc� j� fez anivers�rio esse ano? s/n ");
    scanf("%c", &lixo);
    scanf("%c", &pergunta);
        if (pergunta == 's'){
            printf("Sua idade atual �: %d anos\n\n", anoAtual - anoNascimento);
        }else
            printf("Sua idade atual �: %d anos\n\n", anoAtual - anoNascimento - 1);

    printf("Digite um ano para saber a idade que voc� ter� nele: ");
    scanf("%d", &anoFuturo);

    printf("Sua idade em %d ser� de %d anos", anoFuturo, (anoFuturo - anoNascimento));


}
