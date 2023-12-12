#include <stdio.h>

int main()
{
    int tipoCliente;
    float valor;
    
    printf("Digite o valor da conta (R$): ");
    scanf("%f", &valor);
    printf("Escolha o tipo de pagador:\n1 - Cliente Comum\n2 - Funcionário\n3 - Cliente Vip\n");
    scanf("%i", &tipoCliente);
    
    switch(tipoCliente)
    {
        case 1: printf("Valor final da conta igual ao original para clientes comuns: R$%.2f.", valor);
                break;
        case 2: valor = valor*0.9;
                printf("Desconto de 10%% para funcionários aplicado à conta, totalizando: R$%.2f", valor);
                break;
        case 3: valor = valor*0.95;
                printf("Desconto de 5%% para clientes vip aplicado à conta, totalizando: R$%.2f", valor);
                break;
        default: printf("Opção inválida.");
    }
    
    return 0;
}
