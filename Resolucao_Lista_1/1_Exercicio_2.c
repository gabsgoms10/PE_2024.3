/*Escreva um programa emC que leia um número n do usuário e imprima todos os números
primos no intervalo [1,n].*/

# include <stdio.h>

int main(){
    printf("Entenda quais números são primos entre 1 e o número que está pensando agora! \n");
    printf("Me passe um número \n");
    int entrada;
    scanf("%d",&entrada);
    int inputUsuario = entrada;

    while(inputUsuario !=0)
    {
    int x = inputUsuario;
    int divisores =0;
    while (x!=0)
    {
        if(inputUsuario % x ==0)
        {
            divisores+=1;
        }
        x--;
    }
    if(divisores==2){
        printf("O número %d é primo \n", inputUsuario);
    }
    inputUsuario--;
    }
    return 0;
}