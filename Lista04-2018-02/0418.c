#include <stdio.h>

int main() {
    int valorJ, valorM, i, contador;

    contador = 0;
    i = 3;

    printf("Declare dois valores positivos: \n");
    scanf("%d %d", &valorJ, &valorM);

    if(valorJ<0 && valorM<0){
        while (valorJ<0 || valorM<0){
            printf("Declare dois valores positivos: \n");
            scanf("%d %d", &valorJ, &valorM);
        }
    }

    while(contador<10){
        if((i%valorM) == (valorJ%valorM)){
            printf("%d \n",i);
            contador++;
        }
        i++;
    }

    return 0;
}
