#include<stdio.h>

int main()
{
    int contador = 9, novoNumero, maior, solicitacao = 2;
    
    printf("Insira um número qualquer: ");
    scanf("%i", &novoNumero);
    maior = novoNumero;
    
    while(contador != 0)
    {
        printf("Insira um outro número: ", solicitacao);
        scanf("%i", &novoNumero);
        
        if(novoNumero > maior)
        {
            maior = novoNumero;
        }
        
        contador--;
    }
    
    printf("O maior número dentre os digitados é %i", maior);
    
    return 0;
}
