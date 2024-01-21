#include <stdio.h>

int main(){

    setlocale(LC_ALL, "");

    float temp, menor, aux;
    int rep;

    rep = 0;

    printf("Digite 5 temperaturas para serem comparadas:\n");
    do{
        rep++;
        scanf("%f", &temp);
        if(rep==1)
           menor = temp;
            else
                if(temp<menor)
                    menor = temp;
    }while(rep<5);

    printf("Menor temperatura inserida: %.2f ºC\n", menor);

    return 0;
}
