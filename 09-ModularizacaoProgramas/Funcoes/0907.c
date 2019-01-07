#include <stdio.h>
#include <string.h>

void categoria(int idadeNadador, char *string){
    if(idadeNadador>=5 && idadeNadador<=7){
        strcpy(string, "Infantil A");
    } else if(idadeNadador>=8 && idadeNadador<=10){
        strcpy(string, "Infantil B");
    } else if(idadeNadador>=11 && idadeNadador<=13){
        strcpy(string, "Juvenil A");
    } else if(idadeNadador>=14 && idadeNadador<=17){
        strcpy(string, "Juvenil B");
    } else if (idadeNadador>=18){
        strcpy(string, "Adulto");
    } else{
        strcpy(string, "Idade não permitida");
    }
}

int main() {
    int idade;
    char registro[15];
    printf("Declare a idade do nadador:\n");
    scanf("%d", &idade);
    categoria(idade, registro);
    printf("A categoria do nadador é: %s.\n", registro);
    return 0;
}