#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    printf("Digite o número para saber qual é o dia da semana correspondente.\n");
    scanf("%d", &numero);
    if (numero==1){
        printf("Segunda-feira");
    }
    else if (numero==2){
        printf("Terça-feira");
    }
    else if (numero==3){
        printf("Quarta-feira");
    }
    else if (numero==4){
        printf("Quinta-feira");
    }
    else if (numero==5){
        printf("Sexta-feira");
    }
    else if (numero==6){
        printf("Sábado");
    }
    else if (numero==7){
        printf("Domingo");
    }
    else {
        printf("Dia da semana inválido");
    }
    return 0;
}