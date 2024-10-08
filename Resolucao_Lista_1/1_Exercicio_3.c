/*Escreva uma função em C que compute o valor de n!, onde n ∈ N*/

# include <stdio.h>

int main()
{
    printf("Calculadora de fatorial \n");
    printf("Digite o número que deseja saber o fatorial \n");
    int fatorial;
    scanf("%d",&fatorial);
    int numeroInicial = fatorial;
    int fatorialAplicado=1;

    while (fatorial >0)
    {
        fatorialAplicado *=fatorial;
        fatorial--;
    }
    printf("O fatorial de %d é %d \n", numeroInicial, fatorialAplicado);
    return 0;
}