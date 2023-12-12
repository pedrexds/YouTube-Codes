#include <stdio.h>

int main()
{
    int mes;
    
    printf("Digite um número de 1 a 12: ");
    scanf("%i", &mes);
    
    switch(mes)
    {
        case 1: printf("Mês correspondente: Janeiro.");
                break;
        case 2: printf("Mês correspondente: Fevereiro.");
                break;
        case 3: printf("Mês correspondente: Março.");
                break;
        case 4: printf("Mês correspondente: Abril.");
                break;
        case 5: printf("Mês correspondente: Maio.");
                break;
        case 6: printf("Mês correspondente: Junho.");
                break;
        case 7: printf("Mês correspondente: Julho.");
                break;
        case 8: printf("Mês correspondente: Agosto.");
                break;
        case 9: printf("Mês correspondente: Setembro.");
                break;
        case 10: printf("Mês correspondente: Outubro.");
                 break;
        case 11: printf("Mês correspondente: Novembro.");
                 break;
        case 12: printf("Mês correspondente: Dezembro.");
                 break;
        default: printf("Não há mês correspondente para este número.");
    }
    
    return 0;
}
