#include<stdio.h>

// 3. Faça um algoritmo que leia um número e imprima uma das mensagens: “É múltiplo
// de 3” ou “Não é múltiplo de 3”.

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num%3 == 0) // % = operador de resto. "Se o resto da divisão de num por 3 é igual a 0"
    {
        printf("%i é múltiplo de 3.", num);
    }
    else
    {
        printf("%i não é múltiplo de 3.", num);
    }
    
    return 0;
}
