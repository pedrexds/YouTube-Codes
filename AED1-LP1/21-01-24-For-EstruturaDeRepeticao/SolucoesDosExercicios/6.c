#include<stdio.h>

int main()
{
  int i;
  
  printf("Números pares entre 600 e 1:\n");
  for (i=600; i>=1; i--)
  {
      if (i%2==0)
      {
        printf("%i\n", i);
      }
  }
  
  return 0;
}
