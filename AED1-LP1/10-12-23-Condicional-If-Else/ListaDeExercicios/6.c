#include<stdio.h>

// 6. Faça um algoritmo de calculadora, que dados dois números fornecidos pelo usuário,
//calcula e mostra o resultado de uma das operações: adição, subtração, multiplicação
//e divisão.

int main()
{
    int num1, num2, operacao;
    float result; // Para o caso de divisões não inteiras
    
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite segundo número: ");
    scanf("%i", &num2);
    
    printf("Digite a operação desejada:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%i", &operacao);
    
    if(operacao == 1)
    {
        result = num1+num2;
    }
    else if(operacao == 2)
    {
        result = num1-num2;
    }
    else if(operacao == 3)
    {
        result = num1*num2;
    }
    else if(operacao == 4)
    {
        if(num2 != 0)
        {
            result = num1/num2;
        }
        else
        {
            printf("Não existe divisão real por zero.");
            return 0;
        }
    }
    
    printf("Resultado: %.2f", result);
    
    return 0;
}
