#include <stdio.h>

//Transformar uma temperatura de Fahrenheit para Celsius. (TC/5 = (TF - 32)/9)

int main()
{
    float tc, tf;

    printf("Qual a temperatura em Fahrenheit: ");
    scanf("%f", &tf);

    tc = ((tf - 32)/9)*5;
    printf("%.2f F em Celsius eh %.2f C",tf,tc);
    return 0;
}