#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\lsfar\Documents\Programas em C\Recursividade\potencia.h"
#include "C:\Users\lsfar\Documents\Programas em C\Recursividade\somaNumerosNaturais.h"

int main()
{

    setlocale(LC_ALL, "portuguese");
    int base, expoente, resultado, numero, escolha;

    printf("Escolha \n1-Pot�ncia \n2-Soma de n�meros naturais \n");
    scanf("%d", &escolha);

    switch(escolha){
    case 1:
        printf("Voc� escolheu pot�ncia.");
        printf("Digite a base: ");
        scanf("%d", &base);

        printf("Digite o expoente: ");
        scanf("%d", &expoente);

        resultado = potencia(base, expoente);

        printf("%d", resultado);

        return 0; break;

    case 2:
        printf("Digite um numero: ");
        scanf("%d", &numero);

        resultado = somaNumerosNaturais(numero);

        printf("%d", resultado);

        return 0; break;

    default:
        printf("Entrada inv�lida.");

    }


}
