#include <stdio.h>

int main()
{
    int contador = 1;

    while(contador <= 100)
    {
        if(contador%2 == 1)
        {
            printf("%i ", contador);    
        }
        
        contador++;
    }
}
