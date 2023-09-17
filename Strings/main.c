#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "portuguese");

    char c;

    printf("Digite uma letra, um número ou um caracter especial para testá-lo: ");
    scanf("%c", &c);


    if(isalpha(c)){
        printf("%c é uma letra. \n", c);
    }else {
        printf("%c não é uma letra.\n", c);
    }

    if(isdigit(c)){
        printf("%c é um dígito.\n", c);
    }else{
        printf("%c não é um dígito.\n", c);
    }

     if(isupper(c)){
        printf("%c é uma letra maíuscula.\n", c);
    }else{
        printf("%c não é uma letra maíuscula.\n", c);
    }

     if(islower(c)){
        printf("%c é uma letra minúscula.\n", c);
    }else{
        printf("%c não é uma letra minúscula.\n", c);
    }

     if(isalnum(c)){
        printf("%c é uma letra ou um dígito.\n", c);
    }else{
        printf("%c não é uma letra, nem um dígito.\n", c);
    }
    return 0;
}
