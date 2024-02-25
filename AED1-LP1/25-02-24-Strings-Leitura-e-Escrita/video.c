#include <stdio.h>
// Estrutura da string: [p, a, t, o, \0]

int main()
{
    char palavra[5], fraseLida[100];
    char nome[6] = {'P', 'e', 'd', 'r', 'o', '\0'};
    char nomeDinamico[] = "Pedrex";
    int novoNumero;
    
    palavra[0] = 'p';
    palavra[1] = 'a';
    palavra[2] = 't';
    palavra[3] = 'o';
    palavra[4] = '\0';
    
    printf("Variável 'palavra' : %s", palavra);
    printf("\nVariável 'nome' : %s", nome);
    printf("\nVariável 'nomeDinamico' : %s", nomeDinamico);
    
    printf("\n\nDigite um número: ");
    scanf("%i", &novoNumero);
    
    printf("\nDigite uma nova palavra ou frase: ");
    scanf(" %[^\n]s", fraseLida);
    printf("Frase inserida: %s\n", fraseLida);
    
    return 0;
}
