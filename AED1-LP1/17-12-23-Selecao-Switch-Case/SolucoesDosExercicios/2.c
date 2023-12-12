#include<stdio.h>

int main()
{
    int choice;
    float valor;
    
    printf("Informe o valor a ser pago (R$): ");
    scanf("%f", &valor);
    printf("Informe a forma de pagamento:\n1 - Dinheiro\n2 - Pix\n3 - Cartão de Débito\n4 - Cartão de Crédito\n");
    scanf("%i", &choice);
    
    switch(choice)
    {
        case 1: printf("Pagamento em dinheiro:\n");
                valor = valor*0.95;
                printf("Desconto de 5%% aplicado ao valor da conta, totalizando: R$%.2f.", valor);
                // o "%%" serve para digitar o símbolo de porcentagem sem o risco de gerar warnings que sugiram algum valor de variável no código
                break;
        case 2: printf("Pagamento via pix:\n");
                valor = valor*0.95;
                printf("Desconto de 5%% aplicado ao valor da conta, totalizando: R$%.2f.", valor);
                break;
        case 3: printf("Pagamento no débito:\n");
                printf("Valor da conta sem alteração: R$%.2f.", valor);
                break;
        case 4: printf("Pagamento no crédito:\n");
                valor = valor*1.05f;
                printf("Valor da conta com a taxa de 5%%: R$%.2f.", valor);
                break;
        default: printf("Opção de pagamento inválida.");
    }
    
    return 0;
}
