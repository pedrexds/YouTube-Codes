#include<stdio.h>

int main()
{
  int i, s=0;
  
  for(i=0; i<=100;i++)
  {
      s = i+s;
      printf("%i\n", s);
  }
  
  return 0;
}
