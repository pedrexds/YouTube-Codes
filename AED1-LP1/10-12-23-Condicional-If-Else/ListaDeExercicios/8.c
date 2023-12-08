#include<stdio.h>

/*
Um determinado clube de futebol pretende classificar seus atletas em categorias e
para isto ele contratou um programador para criar um programa que executasse esta
tarefa. Para isso o clube criou uma tabela que continha a faixa etária do atleta e sua
categoria. A tabela está demonstrada abaixo:
IDADE CATEGORIA
De 05 a 10 Infantil
De 11 a 15 Juvenil
De 16 a 20 Junior
De 21 a 25 Profissional
*/

int main()
{
    int idade;
    
    printf("Digite a idade do jogador: ");
    scanf("%i", &idade);
    
    if((idade >= 5)&&(idade <= 10))
    {
        printf("O jogador se encaixa na categoria infantil.");
    }
    else if((idade >= 11)&&(idade <= 15))
    {
        printf("O jogador se encaixa na categoria juvenil.");
    }
    else if((idade >= 16)&&(idade <=20))
    {
        printf("O jogador se encaixa na categoria júnior.");
    }
    else if((idade >= 21)&&(idade <= 25))
    {
        printf("O jogador se encaixa na categoria profissional.");
    }
    else
    {
        printf("O jogador não se encaixa em nenhuma categoria.");
    }
    
    return 0;
}
