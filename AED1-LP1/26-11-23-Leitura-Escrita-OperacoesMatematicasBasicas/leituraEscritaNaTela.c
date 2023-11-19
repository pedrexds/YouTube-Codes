#include<stdio.h>

int main()
{
    int numInteiro;
    float numReal;
    char letra;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &numInteiro);
    printf("O número guardado na variável numInteiro é o número %i\n", numInteiro);
    
    printf("Digite um número de ponto flutuante (float): ");
    scanf("%f", &numReal);
    printf("O número guardado na variável numReal é o número %.2f\n", numReal);
    
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    printf("O caractere digitado foi: %c\n", letra);
    
    return 0;
}