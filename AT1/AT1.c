#include <stdio.h>

//Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor
int main()
{
    int n;
    int a;
    printf("Digite um numero: ");
    scanf("%d", &n);
    a = n-1;
    printf("O antessesor de %d eh %d", n, a);
    return 0;
}