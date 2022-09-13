#include <stdio.h>

/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, 
nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/
int main()
{
    int nNulos;
    int nValidos;
    int nBrancos;
    float totalEleitores;
    float percNulos;
    float percBrancos;
    float percValidos;

    char p = '%';
    
    printf("Qual o total de votos validos: ");
    scanf("%d", &nValidos);

    printf("Qual o total de votos brancos: ");
    scanf("%d", &nBrancos);

    printf("Qual o total de votos nulos: ");
    scanf("%d", &nNulos);

    totalEleitores = nBrancos + nValidos + nNulos;

    percValidos = (nValidos / totalEleitores) * 100;
    percBrancos = (nBrancos / totalEleitores) * 100;
    percNulos = (nNulos / totalEleitores) * 100;

    printf("O tatal de Eleitores foi: %d\n", totalEleitores);
    printf("O percentual de votos validos foi: %.1f %c\n", percValidos, p);
    printf("O percentual de votos brancos foi: %.1f %c\n", percBrancos, p);
    printf("O percentual de votos nulos foi: %.1f %c\n", percNulos, p);

    return 0;
}