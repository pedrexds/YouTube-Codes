#include<stdio.h>
//Estrutura de Seleção

int main()
{
    char escolha;
    
    printf("Menu: escolha uma letra de a a g");
    scanf("%c", &escolha);
    
    switch(escolha)
    {
        case 'a': printf("\nOpção a escolhida.");
                break;
        case 'b': printf("\nOpção b escolhida.");
                break;
        case 'c': printf("\nOpção c escolhida.");
                break;
        case 'd': printf("\nOpção d escolhida.");
                break;
        case 'e': printf("\nOpção e escolhida.");
                break;
        case 'f': printf("\nOpção f escolhida.");
                break;
        case 'g': printf("\nOpção g escolhida.");
                break;
        default: printf("\nOpção inválida.");
    }
    
    return 0;
}
