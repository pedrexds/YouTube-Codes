#include<stdio.h>

/*
10. Faça uma solução para o usuário informar um valor inteiro maior que zero, o qual
representa o valor monetário de um produto. Em seguida, a mesma condição para
um valor que representa o valor a ser pago pelo cliente. O sistema deverá mostrar a
quantidade de notas para o possível troco, considerando sempre as notas de maior
valor. As possíveis notas para troco são: 50, 20, 10, 5, 2, moeda de 1. Use o
operador módulo (%) para obter o resto da divisão.
*/

int main()
{
    int nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, moeda1=0, troco, valorCompra, valorPagamento;
    
    printf("Informe o valor da compra: ");
    scanf("%i", &valorCompra);
    printf("Informe o valor em dinheiro dado para pagamento: ");
    scanf("%i", &valorPagamento);
    
    troco = valorPagamento - valorCompra;
    
    if(troco >= 50)
    {
        nota50 = troco/50;
        troco = troco%50;
    }
    
    if(troco >= 20)
    {
        nota20 = troco/20;
        troco = troco%20;
    }
    
    if(troco >= 10)
    {
        nota10 = troco/10;
        troco = troco%10;
    }
    
    if(troco >= 5)
    {
        nota5 = troco/5;
        troco = troco%5;
    }
    
    if(troco >= 2)
    {
        nota2 = troco/2;
        troco = troco%2;
    }
    
    if(troco >= 1)
    {
        moeda1 = troco/1;
        troco = troco%1;
    }
    
    printf("Notas/moedas usadas no troco:\nR$50: %d\nR$20: %d\nR$10: %d\nR$5: %d\nR$2: %d\nR$1: %d", nota50, nota20, nota10, nota5, nota2, moeda1);
    
    return 0;
}
