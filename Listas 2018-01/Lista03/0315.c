#include <stdio.h>

int main() {
    int i;
    float termo1=37, termo2=38, soma=0;
    for(i=1;i<=37;i++){
        soma+= (termo1*termo2)/i;
        termo1-=1;
        termo2-=1;
    }
    printf("A soma é %.2f.\n", soma);
    return 0;
}
