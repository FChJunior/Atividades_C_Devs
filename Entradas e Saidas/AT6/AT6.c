#include <stdio.h>

//Escreva um algoritmo para ler as dimensões de um retângulo (largura e comprimento) e escreva a área e o perímetro.

int main()
{
    int h, b, per, are;

    printf("Qual a largura do retangulo: ");
    scanf("%d",&b);

    printf("Qual a altura do retangulo: ");
    scanf("%d", &h);

    per = 2*b + 2*h;
    are = b * h;

    printf("A area do retangulo eh %d e o periometro eh %d", are, per);

    return 0;
}