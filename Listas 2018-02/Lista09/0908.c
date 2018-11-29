#include <stdio.h>
#include <string.h>

int main() {
    double pesoIdeal (int altura, char *sexo);
    double resultado, peso;
    char sexo[6];
    printf("Declare o seu peso:\n");
    scanf("%lf", &peso);
    printf("Declare seu gênero(mulher/homem):\n");
    scanf("[ˆ\n]%s", sexo);
    resultado = pesoIdeal(peso, sexo);
    printf("%.2lf", resultado);
    return 0;
}

double pesoIdeal (int altura, char *sexo){
    double resultado;
    if (sexo=="homem"){
        resultado = 72.7*altura-58;
    } else if (strncmp(sexo)=="mulher"){
        resultado = 62.1*altura-44.7;
    }
    return resultado;
}