#include <stdio.h>

int main()
{
    float altura, pesoIdeal=0;
    char genero;
    
    printf("Digite a altura da pessoa (em cm): ");
    scanf("%f", &altura);
    fflush(stdin); // Usado para evitar que o \n do Enter seja colocado na variável "genero"
    printf("Digite o gênero da pessoa:\n(M) para Masculino\n(F) para Feminino\n");
    scanf("%c", &genero);
    
    switch(genero)
    {
        case 'M': pesoIdeal = 52+(0.75*(altura - 152.4));
                  break;
        case 'F': pesoIdeal = 52+(0.67*(altura - 152.4));
                  break;
        default: printf("Opção Inválida.");
    }
    
    if(pesoIdeal != 0)
    {
        printf("Peso ideal calculado: %.2f kg.", pesoIdeal);
    }
    
    return 0;
}
