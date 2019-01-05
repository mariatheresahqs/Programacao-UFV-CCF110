#include <stdio.h>

typedef struct{
    char sexo;
    char corOlhos[20];
    char corCabelos[20];
    int idade;
}tipoHabitante;


void registroIndividuos(tipoHabitante *dadosHabitantes, int tamanhoAmostra){
    tipoHabitante individuo;
    int i;
    for(i=0;i<tamanhoAmostra;i++){
        printf("Declare o sexo do individuo, F para feminino, e M para masculino:\n");
        scanf(" %s", &individuo.sexo);
        printf("Declare a cor dos olhos do individuo (azuis, verdes ou castanhos):\n");
        scanf(" %s",&individuo.corOlhos);
        printf("Declare a cor dos cabelos dos individuos (louros, pretos ou castanhos):\n");
        scanf(" %s", &individuo.corCabelos);
        printf("Declare a idade do individuo:\n");
        scanf("%d", &individuo.idade);
        dadosHabitantes[i] = individuo;
    }
}

int main() {
    int tamanhoAmostra,i;
    printf("Declare o tamanho da amostra:\n");
    scanf("%d", &tamanhoAmostra);
    tipoHabitante individuo, dadosHabitantes[tamanhoAmostra];

    registroIndividuos(&dadosHabitantes, tamanhoAmostra);

    for(i=0;i<tamanhoAmostra;i++){
        printf("Sexo: %c.\n", dadosHabitantes[i].sexo);
        printf("Cor dos olhos: %s.\n", dadosHabitantes[i].corOlhos);
        printf("Cor dos cabelos: %s.\n", dadosHabitantes[i].corCabelos);
        printf("Idade: %d.\n", dadosHabitantes[i].idade);
    }

    return 0;
}