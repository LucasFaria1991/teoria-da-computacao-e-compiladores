#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\media.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\idade.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\dolar.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\salario.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\losango.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\fahrenheit.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\quantSalarios.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\peso.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\hipotenusa.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\esfera.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exercícios\tabuada.h"
int main()
{

 setlocale(LC_ALL, "portuguese");
 int decisao;

 printf("Digite o que quer executar: \n");
 printf("1-Média Aritmética de três números.\n");
 printf("2-Cálculo de idade.\n");
 printf("3-Cotação do dólar.\n");
 printf("4-Aumento de salário.\n");
 printf("5-Area do losango.\n");
 printf("6-Conversão temperatura.\n");
 printf("7-Quantidade de salários mínimos.\n");
 printf("8-Aumento de peso.\n");
 printf("9-Calcular a Hipotenusa.\n");
 printf("10-Medidas de uma esfera.\n");
 printf("11-Tabuada de multiplicação.\n");
 scanf("%d", &decisao);

 switch(decisao){
    case 1:
        media();break;
    case 2:
        idade();break;
    case 3:
        dolar();break;
    case 4:
        salario();break;
    case 5:
        losango();break;
    case 6:
        fahrenheit();break;
    case 7:
        quantSalarios();break;
    case 8:
        peso();break;
    case 9:
        hipotenusa();break;
    case 10:
        esfera();break;
    case 11:
        tabuada();break;
 }
    return 0;
}
