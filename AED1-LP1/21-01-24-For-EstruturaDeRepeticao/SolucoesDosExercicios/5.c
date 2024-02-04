#include<stdio.h>

int main()
{
  int i;
  
  printf("Números inteiros ímpares entre 0 e 20:\n");
  for(i=0; i<=20; i++)
  {
      if(i%2==1)
      {
        printf("%i\n", i);
      }
  }
  
  return 0;
}
