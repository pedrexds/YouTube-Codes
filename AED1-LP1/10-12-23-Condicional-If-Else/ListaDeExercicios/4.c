#include<stdio.h>

// 4. Faça uma solução para o usuário informar dois inteiros. O sistema deverá
// imprimí-los em ordem crescente e em ordem decrescente de acordo com o valor.

int main()
{
    int num1, num2;
    
    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite outro número: ");
    scanf("%i", &num2);
    
    if(num1 > num2)
    {
        printf("Ordem Crescente: %i %i\nOrdem Decrescente: %i %i", num2, num1, num1, num2);
    }
    else
    {
        printf("Ordem Crescente: %i %i\nOrdem Decrescente: %i %i", num1, num2, num2, num1);
    }
    
    return 0;
}
