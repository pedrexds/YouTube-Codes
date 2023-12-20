#include <stdio.h>

int main()
{
    int num, alg = 0, soma = 0;
    
    printf("Digite o número a ser somado: ");
    
    do
    {
        scanf("%i", &num);
        soma  = soma + num;
        alg += 1;
        
        if(num == 0)
        {
            break;
        }
        
        printf("Digite o próximo número: ");
    }while(num != 0);
    
    printf("Resultado final da soma: %i\nTotal de números somados: %i", soma, alg);
    
    return 0;
}
