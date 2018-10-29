#include <stdio.h>
#include <math.h>

int main() {
    int termos, i, impares=1;
    double pi, soma=0;
    printf("Declare até qual termo a soma será realizada:\n");
    scanf("%d",&termos);
    for(i=1;i<=termos;i++){
        if(i%2==0) {
            soma += (-1) / pow(impares, 3);
        }else {
            soma += (1) / pow(impares, 3);
        }
        impares+=2;
    }
    printf("%f\n", soma);
    soma = soma*32;
    pi = pow(soma,1.0/3.0);
    printf("%f\n", pi);
    return 0;
}
