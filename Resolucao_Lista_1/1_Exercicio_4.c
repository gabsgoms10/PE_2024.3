# include <stdio.h>

int fatorial(int input)
{ 
    int result = input;
    input -=1;

    while(input !=0)
    {
        result *= input;
        input --;
    }

    return result;

}

int main()
{
    int n, k;

    n = 4;
    k = 3;
    // printf("Escreva o N\n");
    // scanf("%d",&n);
    // printf("Escreva o K\n");
    // scanf("%d",&k);

    int resultado = 0;
    int fatorialK, fatorialN, fatorialNK;

    fatorialK = fatorial(k);
    fatorialN = fatorial(n);
    fatorialNK = fatorial(n-k);

    resultado = fatorialN/(fatorialK*fatorialNK);
    printf("O resultado é %d\n", resultado);
    return 0;
}