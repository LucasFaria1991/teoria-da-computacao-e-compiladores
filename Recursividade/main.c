#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\lsfar\Documents\Programas em C\Recursividade\potencia.h"
#include "C:\Users\lsfar\Documents\Programas em C\Recursividade\somaNumerosNaturais.h"

int main()
{

    setlocale(LC_ALL, "portuguese");
    int base, expoente, resultado, numero, escolha;

    printf("Escolha \n1-Potência \n2-Soma de números naturais \n");
    scanf("%d", &escolha);

    switch(escolha){
    case 1:
        printf("Você escolheu potência.");
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
        printf("Entrada inválida.");

    }


}
