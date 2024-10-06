// 1. O preço de um carro é calculado pela soma dopreço de fábrica, o preço dos impostos (45% dopreço de fábrica) e a porcentagem dorevendedor (28% do preço de fábrica). Fazer umalgoritmo que leia o nome do carro e seu preço defábrica. Calcule e mostre o preço final do carro.
#include <stdlib.h>
#include <stdio.h>

int main() {
    double preco_fabrica, preco_impostos, porcentagem_vendedor;
    char nome_carro[100];
    printf("Digite o nome do carro: ");
    scanf("%s", nome_carro);
    printf("Digite o preco de fabrica: ");
    scanf("%lf", &preco_fabrica);
    preco_impostos = 0.45*preco_fabrica;
    porcentagem_vendedor = 0.28*preco_fabrica;
    double preco_final = preco_fabrica + preco_impostos + porcentagem_vendedor;
    printf("Preco final do carro %s: %.2f", nome_carro, preco_final);
}