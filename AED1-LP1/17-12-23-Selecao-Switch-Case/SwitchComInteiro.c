#include<stdio.h>
//Estrutura de Seleção

int main()
{
    int escolha;
    
    printf("Menu: escolha uma letra de a a g");
    scanf("%i", &escolha);
    
    switch(escolha)
    {
        case 1: printf("\nOpção 1 escolhida.");
                break;
        case 2: printf("\nOpção 2 escolhida.");
                break;
        case 3: printf("\nOpção 3 escolhida.");
                break;
        case 4: printf("\nOpção 4 escolhida.");
                break;
        case 5: printf("\nOpção 5 escolhida.");
                break;
        case 6: printf("\nOpção 6 escolhida.");
                break;
        case 7: printf("\nOpção 7 escolhida.");
                break;
        default: printf("\nOpção inválida.");
    }
    
    return 0;
}
