#include<stdio.h>

int main()
{
    int num1, num2, resultAdicao, resultSub, resultDiv, resultMult;
    
    printf("Digite um número para num1: ");
    scanf("%i", &num1);
    printf("Digite um número para num2: ");
    scanf("%i", &num2);
    
    resultAdicao = num1+num2;
    resultSub = num1-num2;
    resultMult = num1*num2;
    resultDiv = num1/num2;
    
    printf("Resultados das Operações:\n");
    printf("Adição: %i\nSubtração: %i\nMultiplicação: %i\nDivisão: %i\n", resultAdicao, resultSub, resultMult, resultDiv);
    
    return 0;
}
