/*Escreva um programa emC que leia um número n do usuário e imprima todos os números
pares do intervalo [0,n]*/

#include <stdio.h>

int main(){

    int inputUsuario;
    inputUsuario == scanf("%d",&inputUsuario);
    do {
        if (inputUsuario % 2 != 1)
        {
            printf("%d\n",inputUsuario);
        }
        inputUsuario--;
        } 
    while (inputUsuario!=0);
    return 0;
}