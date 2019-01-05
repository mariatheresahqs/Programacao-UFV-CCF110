#include <stdio.h>

int main(){
    int tamanho, i;
    tamanho = 5;
    int genero[tamanho], contadorMulheres;
    float altura[tamanho], maiorAltura, menorAltura, mediaAlturaMulheres,
    somaAlturaMulheres=0, mediaAlturaTurma, somaAlturaTurma=0;
    printf("Declare o sexo e a altura de cada pessoa:\n");
    for(i=0;i<tamanho;i++){
        scanf("%d %f", &genero[i], &altura[i]);
    }
    for(i=0;i<tamanho;i++){
        if(genero[i]==2){
            somaAlturaMulheres+= altura[i];
            contadorMulheres++;
        }
        somaAlturaTurma+= altura[i];
    }
    mediaAlturaMulheres = somaAlturaMulheres/contadorMulheres;
    mediaAlturaTurma = somaAlturaTurma/(float)tamanho;

    maiorAltura = altura[0];
    menorAltura = altura[0];

    for (i=0; i<tamanho; i++) {
        if(altura[i]> maiorAltura){
            maiorAltura = altura[i];
        }
        if(altura[i]<menorAltura){
            menorAltura = altura[i];
        }
    }

    printf("A média de altura das mulheres é: %.2f.\n", mediaAlturaMulheres);
    printf("A média de altura da turma é: %.2f.\n", mediaAlturaTurma);
    printf("A maior altura é: %.2f.\n", maiorAltura);
    printf("A menor altura é: %.2f.\n", menorAltura);


    return 0;
}
