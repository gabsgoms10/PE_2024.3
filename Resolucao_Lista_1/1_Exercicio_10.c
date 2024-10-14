/* Escreva um programa em C que leia uma sequência de n números inteiros e imprima os
seguintes valores: o número mínimo da sequência, o máximo e a média. Na sua implementação, você
deve dividir o seu programa nas seguintes funções*/

# include <stdio.h>
void le_vetor (int entrada[], int n)
{
    entrada[n];
    int counter = 0;
    while(n!=0)
    {   printf("Me passe valor pro array \n");
        scanf("%d", &entrada[counter]);
        counter += 1;
        n -= 1;
    }
}


int minimo(int v[], int n)
{
    int min = v[0];

    do
    {   
        if(v[n-1] < min)
        {
            min = v[n-1];
        }   
        n--;
    
    }
    while(n!=0);
    return min;
}

int maximo(int v[], int n)
{
    int max = 0;

    do
    {   
        if(v[n-1] > max)
        {
            max = v[n-1];
        }   
        n--;
    
    }
    while(n!=0);
    return max;
}

int media(int v[], int n)
{
    int med = 0;
    int holder = n;
    do
    {   
        med += v[n-1];
        n--;
    }
    while(n!=0);
    return med/holder;
}

int main()
{   
    printf("Digite a quantidade de números que deseja analisar\n");
    int quantidadeNumeros;
    scanf("%d",&quantidadeNumeros);
    int ve[quantidadeNumeros];
    le_vetor(ve,quantidadeNumeros);
    printf("O valor minimo é %d \n",minimo(ve,quantidadeNumeros));
    printf("O valor maximo é %d \n",maximo(ve,quantidadeNumeros));
    printf("A média é %d \n",media(ve,quantidadeNumeros));
    return 1;
}