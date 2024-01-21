#include <stdio.h>

int main(){

    setlocale(LC_ALL, "");

    float result, div, quo;

    printf("Digite o dividendo:\n");
    scanf("%f", &div);

    do{
      printf("\nDigite algo diferente de zero para o divisor:\n");
      scanf("%f", &quo);
    }while(quo==0);

    result = div/quo;

    printf("\nResultado final da divisão: %.2f\n", result);

    return 0;
}
