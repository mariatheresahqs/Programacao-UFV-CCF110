#include <stdio.h>

int main() {
    int termos, i;
    float soma=0, numerador=480, denominador=10;
    printf("Declare quantos serão os termos a serem somados:\n");
    scanf("%d", &termos);
    for (i=0;i<termos;i++){
        if(i%2==0){
            soma+=numerador/denominador;
        } else{
            soma+=-(numerador/denominador);
        }
        numerador-=5;
        denominador++;
    }
    printf("A soma dos %d termos da equação é: %.2f.\n", termos, soma);
    return 0;
}
