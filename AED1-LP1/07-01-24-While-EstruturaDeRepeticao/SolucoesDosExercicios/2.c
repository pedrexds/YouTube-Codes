#include <stdio.h>

int main()
{
    int totalAlunos, contador = 1;
    float nota, soma=0.0;

    printf("Número de alunos na sala: ");
    scanf("%i",&totalAlunos);

    while(contador <= totalAlunos)
    {
        printf("Nota do %iº aluno: ", contador);
        scanf("%f",&nota);

        soma = soma + nota;

        contador++;
    }

    printf("Media da turma: %.2f", soma/totalAlunos);
    
    return 0;   
}
