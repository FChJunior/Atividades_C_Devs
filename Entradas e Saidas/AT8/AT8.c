#include <stdio.h>

/*
Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B. 
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que 
o valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados 
nas variáveis.
*/

int main()
{
    int a = 10;
    int b = 20;
    int c = a;
    int d = b;
    a = d;
    b = c;
    

    printf("A iniciou com %d e termonou com %d\n", c,a);
    printf("B iniciou com %d e termonou com %d\n", d,b);
    return 0;
}