#include<stdio.h>

// 5. Faça uma solução para o usuário informar três inteiros. O sistema deverá
// imprimí-los em ordem crescente de valor.

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite segundo número: ");
    scanf("%i", &num2);
    printf("Digite terceiro número: ");
    scanf("%i", &num3);
    
    if(num1 > num2)
    {
        if(num2 > num3)
        {
            printf("Ordem Crescente: %i %i %i", num3, num2, num1);
        }
        else
        {
            printf("Ordem Crescente: %i %i %i", num2, num1, num3);
        }
    }
    else if(num2 > num3)
    {
        if(num3 > num1)
        {
            printf("Ordem Crescente: %i %i %i", num1, num3, num2);
        }
        else
        {
            printf("Ordem Crescente: %i %i %i", num3, num1, num2);
        }
    }
    else
    {
        if(num2 > num1)
        {
            printf("Ordem Crescente: %i %i %i", num1, num2, num3);
        }
        else
        {
            printf("Ordem Crescente: %i %i %i", num2, num1, num3);
        }
    }
    
    return 0;
}
