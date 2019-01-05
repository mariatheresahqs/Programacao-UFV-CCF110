#include <stdio.h>

int main() {
    int idade;
    float peso, dosagem, gotas;

    printf("Qual a idade do paciente?\n");
    scanf("%d", &idade);
    printf("Qual o peso do paciente?\n");
    scanf("%f", &peso);
    if(idade>=12){
        if(peso>=60){
            dosagem = 1000;
        } else{
            dosagem = 875;
        }
    }
    else if(idade<12){
        if(peso>=5 && peso<=9){
            dosagem = 125;
        }
        else if (peso>9 && peso<=16){
            dosagem = 250;
        }
        else if (peso>16 && peso<=24){
            dosagem = 275;
        }
        else if (peso>24 && peso<=30){
            dosagem = 500;
        }
        else if (peso>30){
            dosagem = 750;
        }
    }

    gotas = (dosagem/500) *20;
    printf("O paciente deve tomar %.2f gotas do medicamento por dose.", gotas);

    return 0;
}
