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
    float valorConversao, valorConvertido;
    printf("\n");
    printf("Conversor de Temperatura \n");
    printf("Unidades suportadas: Celsius / Fahrenheit \n");
    printf("Digite a unidade que deseja saber, com 0 para celsius ou 1 para Fahrenheit \n");
    scanf("%d",&unidadeMedida);

    printf("Qual temperatura a ser convertida? \n");
    scanf("%f",&valorConversao);

    if (unidadeMedida == 0)
    {
        valorConvertido = (valorConversao-32) * 5 / 9;
        printf("O valor de %.1f fahrenheit convertido em celsius é de %.1f graus \n", valorConversao,valorConvertido);
    }   
    else if (unidadeMedida == 1)
    {   
        valorConvertido = (valorConversao*9/5) + 32;
        printf("O valor de %.1f graus celsius convertido em fahrenheit é de %.1f \n",valorConversao, valorConvertido);
    }
    else
    {
        printf("Input de temperatura não aceito \n");
    }
    /*return 0;*/
}