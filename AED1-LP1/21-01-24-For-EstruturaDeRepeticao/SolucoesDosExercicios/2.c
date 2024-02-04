#include<stdio.h>

int main()
{
  int i=1;
  
  for(i=1; i<=500; i++)
  {
      if (i%5==0)
      {
        printf("%i\n", i);
      }
  }
  
  return 0;
}
