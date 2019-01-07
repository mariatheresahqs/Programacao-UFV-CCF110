#include <stdio.h>

int main() {
    int numeros, i;
    numeros =50;
    for(i=0;i<=numeros;i++){
        if(i%10==0) {
           printf("\n");
        }
        if(i>0 &&i<=9){
            printf(" ");
        }
        printf("%d ", i);
    }
    return 0;
}
