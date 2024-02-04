#include<stdio.h>

int main()
{
  int i;
  float d =0, s=0;

  printf("Média dos números entre 13 e 73:\n");

  for(i=13; i<=73; i++)
  {
      d++;
      s = s + i;
  }

  printf("\nResultado final da média: %.2f\n", s/d);

  return 0;
}
