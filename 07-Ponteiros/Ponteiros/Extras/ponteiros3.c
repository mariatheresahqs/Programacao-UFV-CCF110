#include <stdio.h>
#include <string.h>

int palavrasCompativeis(char *s, char *t);
int strEnd(char *s, char *t);

int main(){
    char palavra1[26], palavra2[26];
    int retorno;
    printf("Digite uma palavra: ");
    scanf("%s", palavra1);
    printf("Digite outra palavra: ");
    scanf("%s", palavra2);
    printf("%s\n%s\n", palavra1, palavra2);
    retorno = strEnd(palavra1,palavra2);
    if(retorno==1){
        printf("A segunda palavra está contida no final da primeira!\n");
    }
    else
        printf("A segunda palavra não forma final da primeira!\n");
    return 0;
}

int palavrasCompativeis(char *s, char *t){
    if (strlen(t) > strlen(s)){
        printf("A segunda palavra é maior que a primeira!\n");
        return 0;
    }
    else return 1;
}

int strEnd(char *s, char *t){
    if(palavrasCompativeis(s,t)){
        int tamanhoPalavra1 = strlen(s)-1, tamanhoPalavra2 = strlen(t)-1, j= tamanhoPalavra2;
        for(int i=(tamanhoPalavra1); i>=(tamanhoPalavra1- tamanhoPalavra2);i--){
            if(s[i]!=t[j]){
                return 0;
            }
            j--;
        }
    }
    else
        return 0;
    
    return 1;
}