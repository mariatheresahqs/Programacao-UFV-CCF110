#include <stdio.h>

void zerarValores(int *var1, int *var2);

int main(){
    int var1, var2;
    printf("Insira dois valores inteiros:\nVariável 01: ");
    scanf("%d",&var1);
    printf("Variável 02: ");
    scanf("%d", &var2);
    zerarValores(&var1, &var2);
    printf("%d %d\n", var1, var2);

    return 0;
}

void zerarValores(int *var1, int *var2){
    printf("%d %d\n", *var1, *var2);
    *var1 = 0;
    *var2 = 0;
}