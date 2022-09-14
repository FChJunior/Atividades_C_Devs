#include <stdio.h>

/* 
O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor
 e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% 
 e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever 
 o custo final ao consumidor.
*/

#define percImpostos  45.0
#define percDist 28.0
int main()
{
    float custoFabrica, impostos, porcDist, custoNovo;

    printf("Qual o custo de fabrica de um carro novo: ");
    scanf("%f", &custoFabrica);

    porcDist = custoFabrica * percDist / 100;
    impostos = custoFabrica * percImpostos / 100;

    custoNovo = custoFabrica + percDist + impostos;

    printf("Um carro novo saira por R$ %0.2f com percentual do distribuidor sendo R$ %0.2f e com impostos de R$ %0.2f", custoNovo, porcDist, impostos);
    
    return 0; 
}