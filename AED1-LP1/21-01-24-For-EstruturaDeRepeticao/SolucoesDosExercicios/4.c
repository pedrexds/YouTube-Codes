#include<stdio.h>

int main()
{
  int i, q=0;
  
  for (i=15; i<=200; i++)
  {
      q = i*i;
      printf("Quadrado de %i: %i\n",i, q);
  }
  
  return 0;
}
