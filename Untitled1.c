#include <stdio.h>

int main (){  // Função principal
    int numero_de_notas;
    int valor_em_dinheiro;

    printf("Digite o valor em dinheiro\n");
    scanf ("%d",&valor_em_dinheiro);
    if (valor_em_dinheiro >= 100){
        numero_de_notas = (valor_em_dinheiro/100);
        printf("Numero de notas de 100:%d\n", numero_de_notas);
        valor_em_dinheiro = valor_em_dinheiro%100;
    }
    if (valor_em_dinheiro >= 50){
        numero_de_notas = (valor_em_dinheiro/50);
        printf("Numero de notas de 50:%d\n",numero_de_notas);
        valor_em_dinheiro = valor_em_dinheiro%50;
    }
    if(valor_em_dinheiro >= 20){
        numero_de_notas = (valor_em_dinheiro/20);
        printf("Numero de notas de 20:%d\n",numero_de_notas);
        valor_em_dinheiro = valor_em_dinheiro%20;
    }
    if(valor_em_dinheiro >= 10){
        numero_de_notas = (valor_em_dinheiro/10);
        printf("Numero de notas de 10:%d\n",numero_de_notas);
        valor_em_dinheiro = valor_em_dinheiro%10;
    }
    if(valor_em_dinheiro >= 5){
        numero_de_notas = (valor_em_dinheiro/5);
        printf("Numero de notas de 5:%d\n",numero_de_notas);
        valor_em_dinheiro = valor_em_dinheiro%5;
    }
    if (valor_em_dinheiro >= 2){
        numero_de_notas = (valor_em_dinheiro/2);
        printf("Numero de notas de 2:%d\n",numero_de_notas);

    }

            return 0; // essa linha finaliza o programa com sucesso a função principal


}
