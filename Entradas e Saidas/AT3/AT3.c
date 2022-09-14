#include <stdio.h>

/*
Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário.
*/

int main()
{

    float salario;
    float reajuste;
    float novoSalario;

    printf("Informe o seu salario: R$ ");
    scanf("%f", &salario);

    printf("Informe o percentual de reajuste: ");
    scanf("%f", &reajuste);

    novoSalario = ((reajuste/100) * salario) + salario;

    printf("Seu novo salario: R$ %.2f", novoSalario);

    return 0;
}