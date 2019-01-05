/*No sistema imperial, frequentemente são utilizadas as seguintes
medidas lineares:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
Baseado no fato de que 1 polegada equivale a 25.3995 milímetros no
sistema métrico, escreva um programa que converta comprimentos
expressos em milhas, jardas, pés e polegadas em quilômetros. */

#include <stdio.h>

int main() {
    int medida;
    float valor;
    printf("Declare a medida a ser convertida a quilometros:\n1.Pé\n2.Jarda\n3.Milha\n4.Polegada\n");
    scanf("%d",&medida);
    if (medida!=1 && medida!=2 && medida!=3 && medida!=4){
        printf("Valor declarado não se enquadra.");
    }
    else {
        printf("Declare o valor a ser convertido: \n");
        scanf("%f", &valor);

        if (medida == 1) {
            valor = (valor * 25.3995 * 12) / 1000000;
        } else if (medida == 2) {
            valor = (valor * 12 * 25.3995 * 3) / 1000000;
        } else if (medida == 3) {
            valor = (valor * 12 * 25.3995 * 3 * 1760) / 1000000;
        } else if (medida == 4) {
            valor = (valor * 25.3995) / 1000000;
        }
        printf("O valor declarado em quilômetros é: %.5f", valor);
    }
    return 0;
}