/*Leia a velocidade máxima permitida em uma avenida e a velocidade
com que o motorista estava dirigindo nela e calcule a multa que uma
pessoa vai receber, sabendo que são pagos:
a) 50 reais se o motorista ultrapassar em até 10km/h a
velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a
60km/h ou a 56km/h);
 b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade
permitida.
c) 200 reais, se estiver acima de 30km/h da velocidade permitida.*/

#include <stdio.h>

int main() {
    float velocidadeMaxima, velocidadeCarro, diferencaVelocidade, multa;

    printf("Declare a velocidade máxima permitida na via: \n");
    scanf("%f", &velocidadeMaxima);
    printf("Declare a velocidade do veículo ao transitar pela via: \n");
    scanf("%f", &velocidadeCarro);

    diferencaVelocidade = velocidadeCarro - velocidadeMaxima;

    if (diferencaVelocidade>0){
        if (diferencaVelocidade<=10){
            printf("Multa no valor de R$50,00.");
        }
        else if (diferencaVelocidade>10 && diferencaVelocidade<=30){
            printf("Multa no valor de R$100,00.");
        }
        else{
            printf("Multa no valor de R$200,00.");
        }

    }
    else {
        printf("Veículo isento de multa.");
    }

    return 0;
}