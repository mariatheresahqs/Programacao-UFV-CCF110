#include <stdio.h>

int main() {
    int idade;
    printf("Declare sua idade: \n");
    scanf("%d", &idade);
    if(idade<16){
        printf("Não eleitor.\n");
    }else if(idade>=18 && idade<=65){
        printf("Eleitor obrigatório.\n");
    }else {
        printf("Eleitor facultativo.\n");
    }
    return 0;
}