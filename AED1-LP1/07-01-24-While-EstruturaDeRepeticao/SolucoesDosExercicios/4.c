#include<stdio.h>

int main()
{
    int unidadeDeTempo = 0, alturaJoao = 140, alturaPedro = 155;
    
    while(alturaJoao <= alturaPedro)
    {
        alturaJoao += 2;
        alturaPedro++;
        unidadeDeTempo++;
        
        printf("Altura de João: %i\nAltura de Pedro: %i\n\n", alturaJoao, alturaPedro);
        
    }
    
    printf("Foram necessárias %i unidades de tempo para que João ultrapassasse Pedro em altura.", unidadeDeTempo);
    
    return 0;
}
