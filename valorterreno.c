#include <stdio.h>

int main()
{
    float largura, comprimento, valor, area, preco;
    
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &valor);
    
    area = largura*comprimento;
    preco = area*valor;
    
    printf("Area do terreno: %.2fm2\n", area);
    printf("Preco do terreno: R$%.2f", preco);
    
    return 0;
}
