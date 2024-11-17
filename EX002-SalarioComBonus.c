#include <stdio.h>
int main(){
    double slr,vendas;
    char nome[100];

    printf("Digite o nome do vendedor: ");
    scanf("%s", &nome);

    printf("Digite o salario do vendedor: ");
    scanf("%lf", &slr);

    printf("Digite o total arrecado em vendas feitas pelo vendedor: ");
    scanf("%lf", &vendas);

    vendas = vendas * 0.15;
    slr = slr + vendas;
    
    printf("Vendedor: %s\nComissao: R$%.2lf\nSalario: R$%.2lf", nome, vendas, slr);
    
    return 0;
}