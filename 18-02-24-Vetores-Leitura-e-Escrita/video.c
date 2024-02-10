#include<stdio.h>

int main()
{
    float notas[5], media=0;
    
    printf("Insira a notas dentro do vetor:\n");
    
    for(int i=0; i<=4; i++)
    {
        printf("%iª nota: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    printf("Números inseridos no vetor: ");
    
    for(int i=0; i<=4; i++)
    {
        media = media + notas[i];
        printf("%.2f ", notas[i]);
    }
    
    media = media/5;
    
    printf("\nMédia calculada: %.2f", media);
    
    if(media < 6)
    {
        printf("\nAluno reprovado!");
    }
    else
    {
        printf("\nAluno aprovado!");
    }
    
    return 0;
}
