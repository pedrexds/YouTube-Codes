#include<stdio.h>

// 7. Faça um algoritmo que leia um valor x, calcule e imprima o valor de f(x)= 8/(2 – x).

int main()
{
    int x;
    float result;
    
    printf("Digite um valor para x que seja diferente de 2: ");
    scanf("%i", &x);
    
    if(x != 2)
    {
        result = 8/(2-x);
        printf("A função tem resultado: %.2f", result);
    }
    else
    {
        printf("O valor de x não pode ser 2. O resultado da função não é um valor real.");
    }
    
    return 0;
}
