#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\media.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\idade.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\dolar.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\salario.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\losango.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\fahrenheit.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\quantSalarios.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\peso.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\hipotenusa.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\esfera.h"
#include "C:\Users\lsfar\Documents\Programas em C\Exerc�cios\tabuada.h"
int main()
{

 setlocale(LC_ALL, "portuguese");
 int decisao;

 printf("Digite o que quer executar: \n");
 printf("1-M�dia Aritm�tica de tr�s n�meros.\n");
 printf("2-C�lculo de idade.\n");
 printf("3-Cota��o do d�lar.\n");
 printf("4-Aumento de sal�rio.\n");
 printf("5-Area do losango.\n");
 printf("6-Convers�o temperatura.\n");
 printf("7-Quantidade de sal�rios m�nimos.\n");
 printf("8-Aumento de peso.\n");
 printf("9-Calcular a Hipotenusa.\n");
 printf("10-Medidas de uma esfera.\n");
 printf("11-Tabuada de multiplica��o.\n");
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
