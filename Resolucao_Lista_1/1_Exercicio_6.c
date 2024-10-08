/*Questão 6. Escreva um programa que leia um inteiro n e imprima os n primeiros números primos.*/

# include <stdio.h>

int verificaNumeroPrimo(int numeroVerificado)
{   
    int qtdDivisores = 0;
    int divisores = numeroVerificado;
    while (divisores !=0)
    {
        if(numeroVerificado % divisores == 0)
        {
            qtdDivisores += 1;
        }
        divisores--;
    }
    if (qtdDivisores==2){
        return numeroVerificado;
    }
    else {
        return 0;
    }
}

int main()
{
    int quantidadePrimosImprimir;
    printf("Me diga abaixo quantos números primos quer saber! \n");
    scanf("%d",&quantidadePrimosImprimir);
    int base = 1;
    printf("\n");
    while(quantidadePrimosImprimir !=0)
    {
        if(verificaNumeroPrimo(base)!=0)
        {
            printf("%d\n",verificaNumeroPrimo(base));
            quantidadePrimosImprimir--;
        }
        base++;
    }
    return 0;
}