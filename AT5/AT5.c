#include <stdio.h>
#include <math.h>
//Faça um programa que recebe o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).

#define pi 3.14
int main()
{
    int raio;
    float volume;

    printf("Qual o raio da esfera em cm: ");
    scanf("%d", &raio);

    volume = (4 * pi * pow(raio,3)) / 3;

    printf("O volume da esfera eh: %.2f cm^3",volume);

    return 0;
}