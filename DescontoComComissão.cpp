#include <iostream>
#include <stdint.h>

int main (){

    float valor_comisao,comisao;

    char nome_vendendor[100];
    printf("Digite um nome do vendendor: ");
    scanf("%s", nome_vendendor);

    float compra;
    printf("Digite o valor da compra: ");
    scanf("%f",&compra);

    float valor_max_descon;
    printf("Digite o Desconto maximo que o vendendor pode dar em (%%): ");
    scanf("%f", &valor_max_descon);

    printf("Digite o valor da comisao do vendendor em (%):");
    scanf("%f",&comisao);
    float comis;
    comis = (comisao/100);

    float valor_porc;
    valor_porc = (compra/100)*comisao;

    float desconto;
    printf("Digite o Desconto em (%%): ");
    scanf("%f", &desconto);

    while (desconto > valor_max_descon) {
        printf("Digite o valor do desconto abaixo de %.1f%%", valor_max_descon);
        printf("\nDigite o Desconto em (%%): ");
        scanf("%f", &desconto);
    }

    // Calculo da comissao
    valor_comisao = compra * comis;


    // Calculo do desconto
    float calculo_desconto;
    calculo_desconto = (desconto/100.0f) * compra;

    // Valor real da compra
    float valor_final;
    valor_final = compra - calculo_desconto;

    printf("\nO nome do vendedor: %s ", nome_vendendor);
    printf("\nO valor da comissao: %.1f ", valor_comisao);
    printf("\nO valor do desconto foi de %.1f: ", calculo_desconto);
    printf("\nO valor da compra: %.1f ", valor_final);

    return 0;
}