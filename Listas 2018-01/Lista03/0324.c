#include <stdio.h>

int main() {
    int idade, totalMaior50=0, totalMenor21=0;
    while (1){
        printf("Declare a idade:\n");
        scanf("%d", &idade);
        if(idade<0){
            break;
        }
        if(idade<21){
            totalMenor21+=1;
        } else if(idade>50){
            totalMaior50+=1;
        }
    }
    printf("O total de pessoas declaradas com idade inferior a 21 é %d.\n", totalMenor21);
    printf("O total de pessoas declaradas com idade superior a 50 é %d.\n", totalMaior50);
    return 0;
}