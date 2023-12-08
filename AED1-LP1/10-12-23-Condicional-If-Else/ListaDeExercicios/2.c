#include<stdio.h>
#include<math.h> // Biblioteca com recursos matemáticos

// 2. Faça um algoritmo que receba um número e imprima a raiz quadrada do número
// caso ele seja positivo e o quadrado do número caso ele seja negativo.

int main()
{
    int num, result;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num >= 0)
    {
        result = sqrt(num); //sqrt = square root / raíz quadrada - função da math.h
        printf("A raíz quadrada de %i é igual a %i.", num, result);
    }
    else
    {
        result = pow(num, 2); //potência - "pow(x,y)" - x é a base, y é o expoente - função da math.h
        printf("%i elevado ao quadrado é igual a %i.", num, result);
    }
    
    return 0;
}
