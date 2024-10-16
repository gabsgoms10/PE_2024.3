# include <stdio.h>

int busca(int valores[], int n, int chave)
{
    int counter =0;
    int index = -1;
    while(n!=0)
    {
        if (valores[counter] == chave)
        {
            index = counter;
        }
        n--;
        counter++;
    }
    return index;

}

int main()
{
    int tamanho = 6;
    int valores[] = {1,2,3,4,5,6};
    printf("%d",busca(valores, tamanho, 3));
    return 0;
}