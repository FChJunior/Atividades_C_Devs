#include <stdio.h>
#include <math.h> // Biblioteca para utilizar funções matematicas.

//Algoritmo para calcular o IMC do usuário (IMC = Peso/Altura^2).

int main()
{
    float imc, altura, peso;

    printf("Qual o seu peso?: ");
    scanf("%f", &peso);

    printf("Qual a sua altura?: ");
    scanf("%f", &altura);

    imc = peso / (pow(altura, 2));//função pow executa a exponenciação onde o primeiro argumento é a base e o segundo o expoente.

    printf("Seu IMC eh %.2f",imc);
    return 0;
}