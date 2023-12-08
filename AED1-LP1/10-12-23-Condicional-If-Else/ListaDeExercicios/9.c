#include<stdio.h>

/*
9. Construa um programa onde o usuário informa a idade de dois homens 
e a idade de duas mulheres. O sistema imprime duas mensagens com os valores:
homem mais velho + mulher mais velha = resultado
homem mais novo + mulher mais nova = resultado
Assim, o sistema deverá verificar a menor e a maior dentre as idades antes de
calcular as somas.
*/

int main()
{
    int homem1, homem2, mulher1, mulher2, somaMaior, somaMenor;
    
    printf("Digite a idade do primeiro homem: ");
    scanf("%i", &homem1);
    printf("Digite a idade do segundo homem: ");
    scanf("%i", &homem2);
    printf("Digite a idade da primeira mulher: ");
    scanf("%i", &mulher1);
    printf("Digite a idade da segunda mulher: ");
    scanf("%i", &mulher2);
    
    if(homem1 > homem2)
    {
        if(mulher1 > mulher2)
        {
            somaMaior = homem1 + mulher1;
            somaMenor = homem2 + mulher2;
        }
        else
        {
            somaMaior = homem1 + mulher2;
            somaMenor = homem2 + mulher1;
        }
    }
    else
    {
        if(mulher1 > mulher2)
        {
            somaMaior = homem2 + mulher1;
            somaMenor = homem1 + mulher2;
        }
        else
        {
            somaMaior = homem2 + mulher2;
            somaMenor = homem1 + mulher1;
        }
    }
    
    printf("Somas:\nHomem mais velho + mulher mais velha = %i.", somaMaior);
    printf("\nHomem mais novo + mulher mais nova = %i.", somaMenor);
    
    return 0;
}
