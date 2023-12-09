#include<stdio.h>

// Aprovação - Média >= 6 e Faltas <= 18
// Classificação pra exame - Média >= 4 e Faltas <= 18

int main()
{
    float nota1, nota2, media;
    int faltas;
    
    printf("Digite a primeira nota de prova do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota de prova do aluno: ");
    scanf("%f", &nota2);
    
    printf("Digite o total de faltas do aluno: ");
    scanf("%i", &faltas);
    
    media = (nota1 + nota2)/2;
    
    if((media >= 6)&&(faltas <= 18))
    {
        printf("Aluno aprovado direto.");
    }
    else if((media >= 6)&&(faltas > 18))
    {
        printf("Alunio reprovado por falta.");
    }
    else if((media >= 4)&&(faltas <= 18))
    {
        printf("Aluno apto para o exame.");
    }
    else if(media < 4)
    {
        printf("Aluno reprovado por nota sem direito a exame.");
    }
    
    printf("\nMédia do aluno: %.1f", media);
    
    return 0;
}
