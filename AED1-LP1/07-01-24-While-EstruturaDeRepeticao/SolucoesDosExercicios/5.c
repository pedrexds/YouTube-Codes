#include<stdio.h>

int main()
{
    int result = 1, num, aux;
    
    printf("Digite o número do qual deseja saber o fatorial: ");
    scanf("%i", &num);
    aux = num;
    
    if((num == 0)||(num == 1))
    {
        result = 1;
    }
    else
    {
        while(aux > 0)
        {
            result = result * aux;
            aux--;
        }
    }
    
    printf("Resultado final: %i! = %i", num, result);
    
    return 0;
}
