/*Questão 8. Escreva um programa em C que leia um número inteiro n fornecido pelo usuário e imprima
Fn, onde Fn é o n-ésimo número de Fibonacci que é definido como:
Fn =
{
1, se n = 1 ou n = 2,
Fn−1+Fn−2, caso contrário.

*/

# include <stdio.h>


int main(){
    int n_menos_2, n_menos_1, auxiliar,itera;
    n_menos_2 = 0;
    n_menos_1 = 1;
    auxiliar = 0;
    itera =10;
    
    while(itera ==0)
    {
        itera--;
        if (n_menos_1==1)
            {
                printf("%d \n",n_menos_1);
                n_menos_2 = n_menos_1;
                n_menos_1 +=1;
            }
        else 
            {
                auxiliar = n_menos_2;
                n_menos_2 = n_menos_1;
                n_menos_1 = n_menos_2 + auxiliar; 
                printf("%d \n",n_menos_1);
            }
    }
    return 0;
}