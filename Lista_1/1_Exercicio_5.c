/*
No Brasil, medimos a temperatura em Celsius. Já em países de lingua inglesa é muito comum que a medida de temperatura seja feita em Fahrenheit. A seguinte forma nos permite estabelecer
uma relação entre as duas unidades de medida
TC
5
=
TF −32
9
,
onde TC é a temperatura em Celsius e TF é a temperatura em Fahrenheit. Escreva um programa em C
que seja capaz de converter um valor de temperatura entre Celsius e Fahrenheit e vice-versa (pergunte
ao usuário qual é unidade de medida da temperatura de entrada e dê o valor convertido para a outra).
*/

# include <stdio.h>

int main(void)
{
    int unidadeMedida;
    printf("\n");
    printf("Conversor de Temperatura \n");
    printf("Unidades suportadas: Celsius / Fahrenheit \n");
    printf("Digite a unidade desejada, com 0 para celsius ou 1 para Fahrenheit \n");
    scanf("%d",&unidadeMedida);

    if (unidadeMedida == 0)
    {
        printf("Estamos fazendo para celsius");
    }
    else if (unidadeMedida == 1)
    {
        printf("Estamos trabalhando com Fahrenheit");
    }
    /*return 0;*/
}