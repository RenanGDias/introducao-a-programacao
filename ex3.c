#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num_operacao, val1, val2;
    
    printf("Que operação deseja executar? \n1. Adição\n2. Subtração\n3. Divisão\n4. Multiplicação\n");
    scanf("%d", &num_operacao);
    printf("Insira dois valores: ");
    scanf("%d", &val1);
    scanf("%d", &val2);
    switch(num_operacao) {
        case 1:
        printf("O resultado é: %d", (val1 + val2));
        break;
        
        case 2:
        printf("O resultado é: %d", (val1 - val2));
        break;
        
        case 3:
        printf("O resultado é: %.2lf", ((double)val1 / val2));
        break;
        
        case 4:
        printf("O resultado é: %d", (val1 * val2));
        break;
        
        default:
        printf("Operação inválida!");
        break;
    }
}