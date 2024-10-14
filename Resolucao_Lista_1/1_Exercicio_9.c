# include <stdio.h>



int main()
{
    int n = 0;
    printf("Digite o tamanho dos seus vetores \n");
    scanf("%d",&n);
    double u[n];
    double v[n];

    int temp = n;
    int counter = 0;
    while(temp != 0)
    {   
        printf("Me passe o %d valor do primeiro array\n",counter);
        scanf("%lf",&u[counter]);
        counter ++;
        temp--;
    }

    temp = n;
    counter = 0;

    while(temp != 0)
    {   
        printf("Me passe o %d valor do segundo array\n",counter);
        scanf("%lf",&v[counter]);
        counter ++;
        temp--;
    }

    counter = 0;
    double resultado = 0;
    while(n != 0)
    {
        printf("O resultado da %d posição é %lf\n",counter+1 ,u[counter] * v[counter]);
        resultado += u[counter] * v[counter];
        counter++;
        n--;
    }

return 0;
}