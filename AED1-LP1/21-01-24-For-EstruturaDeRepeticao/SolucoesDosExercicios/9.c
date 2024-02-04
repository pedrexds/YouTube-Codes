#include<stdio.h>

int main()
{
  float maior, menor, a, qfor;

  printf("Digite um número: \n");
  scanf("%f", &a);

  maior = a;
  menor = a;

  for (qfor=1; qfor<=4; qfor++)
  {
    printf("\nDigite outro número:\n");
    scanf("%f", &a);
     
    if (a<menor)
    {
      menor = a;
    }
      
    if (a>maior)
    {
      maior = a;
    }
      
    fflush(stdin); // OPCIONAL - Limpa a memória do teclado caso o seu código dê uma bugada na leitura
  }
  
  printf("\nMaior valor: %.2f\nMenor valor: %.2f\n", maior, menor);

  return 0;
}
