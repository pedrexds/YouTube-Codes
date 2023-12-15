#include<stdio.h>

int main()
{
    int n1 = 0, n2 = 0, soma = 0;
    
    while((n1%2 == 0)&&(n2%2 == 0))
    {
        printf("Digite o primeiro número para a soma: ");
        scanf("%i", &n1);
        printf("Digite o segundo número para a soma: ");
        scanf("%i", &n2);
        
        if((n1%2 == 0)&&(n2%2 == 0))
        {
            soma = soma + (n1+n2);
        }
        else
        {
            printf("Os novos números não podem ser adicionados.");
        }
    }
    
    printf("\nValor total da soma entre os pares inseridos: %i", soma);
    
    return 0;
}
