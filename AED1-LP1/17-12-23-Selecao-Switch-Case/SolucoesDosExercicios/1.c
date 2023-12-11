#include<stdio.h>

int main()
{
    int choice, num1, num2, result;
    float dividendo, divisor, resultDiv;
    
    printf("Escolha uma opção:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%i", &choice);
    
    switch(choice)
    {
        case 1: printf("Digite o primeiro número: ");
                scanf("%i", &num1);
                printf("Digite o segundo número: ");
                scanf("%i", &num2);
                result = num1 + num2;
                printf("Resultado: %i", result);
                break;
        case 2: printf("Digite o primeiro número: ");
                scanf("%i", &num1);
                printf("Digite o segundo número: ");
                scanf("%i", &num2);
                result = num1 - num2;
                printf("Resultado: %i", result);
                break;
        case 3: printf("Digite o primeiro número: ");
                scanf("%i", &num1);
                printf("Digite o segundo número: ");
                scanf("%i", &num2);
                result = num1 * num2;
                printf("Resultado: %i", result);
                break;
        case 4: printf("Digite o dividendo: ");
                scanf("%f", &dividendo);
                printf("Digite o divisor: ");
                scanf("%f", &divisor);
                
                if(num2 == 0)
                {
                    printf("O divisor não pode ser zero.");
                }
                else
                {
                    resultDiv = dividendo / divisor;
                    printf("Resultado: %.2f", resultDiv);
                }
                break;
        default: printf("Opção inválida!");
    }
    
    return 0;
}
