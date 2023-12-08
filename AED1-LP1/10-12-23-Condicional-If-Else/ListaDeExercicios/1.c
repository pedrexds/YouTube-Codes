#include<stdio.h>

//1. Faça um algoritmo que receba um número e diga se ele é maior que 10 ou não.

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num > 10)
    {
        printf("Este número é maior que 10.");
    }
    else
    {
        printf("Este número não é maior que 10.");
    }
    
    return 0;
}
