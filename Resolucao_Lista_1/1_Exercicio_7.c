/*Questão 7. Escreva um programa que leia dois inteiros i e j, onde i ≤ j, e que imprima todos os
números primos no intervalo [i, j].*/

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

}



int main()
{
    int primeiroNumero, segundoNumero, auxiliar;
    printf("Calculadora de números primos!\n");
    printf("Me passe dois números positivos!\n");
    printf("Me passe seu primeiro número!\n");
    scanf("%d",&primeiroNumero);
    printf("\n");
    printf("Me passe seu segundo número!\n");
    scanf("%d",&segundoNumero);
    printf("\n");

    if (primeiroNumero > segundoNumero)
    {
        auxiliar = segundoNumero;
        segundoNumero = primeiroNumero;
        primeiroNumero = auxiliar;
    }

    while(segundoNumero != primeiroNumero)
    {   segundoNumero--;
        if (verificaNumeroPrimo(segundoNumero)>0)
        {
        printf( "%d \n", verificaNumeroPrimo(segundoNumero));
        }
    }
    return 0;
}