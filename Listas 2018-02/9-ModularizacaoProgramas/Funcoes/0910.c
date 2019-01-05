#include <stdio.h>

int vogal(char letra){
    int vogalFlag=0;
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' ||
    letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
        vogalFlag = 1;
    }
    return vogalFlag;
}

int main() {
    char letra;
    int flag;
    printf("Digite uma letra:\n");
    scanf("%c", &letra);
    flag = vogal(letra);
    if(flag==1){
        printf("A letra digitada é uma vogal.\n");
    } else if(flag==0){
        printf("A letra digitada é uma consoante.\n");
    }
    return 0;
}