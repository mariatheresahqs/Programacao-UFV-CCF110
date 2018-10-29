#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    while(1){
        scanf("%lf", &valor);
        if(valor==-999){
            break;
        }else {
            printf("%.0lf\n", valor*3);
        }
    }
    return 0;
}
