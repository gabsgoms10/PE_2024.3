/*Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e
imprima esses números em ordem não crescente.*/

# include <stdio.h>

void le_vetor(int vetor[], int tamanho)
{
    int iterador = 0;
    while(tamanho !=0)
    {
        scanf("%d",&vetor[iterador]);
        iterador++;
        tamanho--;
    }
}

void imprime_vetor(int vetor[], int tamanho)
{
    int iterador = 0;
    while(tamanho!=0)
    {
        printf("A %d posição é %d \n", iterador+1 , vetor[iterador]);
        iterador++;
        tamanho--;
    }
}

void maior_numero_vetor(int vetor[], int tamanho, int maximo, int index)
{
    maximo = -100;
    index = 0;
    int iterador = 0;
    while(tamanho!=0)
    {
         if(vetor[iterador]> maximo)
         {
            maximo = vetor[iterador];
            index = iterador;
            iterador++;
            tamanho--;
         }
         else
         {iterador++;
        tamanho--;}
    }
}

void desordem(int vetor[], int tamanho, int numero_maior, int index_numero_maior)
{
    maior_numero_vetor(vetor, tamanho,numero_maior,index_numero_maior);
    
    vetor[index_numero_maior] = vetor[0];
    vetor[0] = numero_maior;

}


int main()
{
    int n;
    n = 10;
    printf("Digite o tamanho da sequencia de números que vai alocar \n");
   // scanf("%d", &n);

    if(n>100 || n <1)
    {
        printf("O valor deve ser maior que 0 e menor que 101");
    }
    else
    {
       // int inputNumeros[n];
       // le_vetor(inputNumeros, n);
       int maximo = 0;
        int index = 0;
        int inputNumeros[] = {1,2,3,4,5,6,7,14,19,25};
        imprime_vetor(inputNumeros, n);
        maior_numero_vetor(inputNumeros,n, maximo, index);
        imprime_vetor(inputNumeros, n);
        printf("%d \n",maximo);
        printf("%d \n",index);
    }

    return 0;
}