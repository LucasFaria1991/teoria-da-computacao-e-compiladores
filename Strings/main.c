#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "portuguese");

    char c;

    printf("Digite uma letra, um n�mero ou um caracter especial para test�-lo: ");
    scanf("%c", &c);


    if(isalpha(c)){
        printf("%c � uma letra. \n", c);
    }else {
        printf("%c n�o � uma letra.\n", c);
    }

    if(isdigit(c)){
        printf("%c � um d�gito.\n", c);
    }else{
        printf("%c n�o � um d�gito.\n", c);
    }

     if(isupper(c)){
        printf("%c � uma letra ma�uscula.\n", c);
    }else{
        printf("%c n�o � uma letra ma�uscula.\n", c);
    }

     if(islower(c)){
        printf("%c � uma letra min�scula.\n", c);
    }else{
        printf("%c n�o � uma letra min�scula.\n", c);
    }

     if(isalnum(c)){
        printf("%c � uma letra ou um d�gito.\n", c);
    }else{
        printf("%c n�o � uma letra, nem um d�gito.\n", c);
    }
    return 0;
}
