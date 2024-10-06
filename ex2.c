/* 
2. As maças custam R$0.30 cada, se foremcompradas menos do que uma dúzia, e R$0.25 se forem compradas pelo menos doze. 
Escreva um algoritmo que leia o número de maçascompradas, calcule e mostre o valor total da compra.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num_macas;
    double valor_total_compra;
    printf("Quantas maçãs foram compradas? ");
    scanf("%d", &num_macas);
    if (num_macas < 12) {
        valor_total_compra = 0.30 * num_macas;
    } else {
        valor_total_compra = 0.25 * num_macas;
    }
    printf("O valor total da compra é: R$%.2lf", valor_total_compra);
}