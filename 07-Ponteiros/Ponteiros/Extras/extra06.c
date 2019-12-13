#include <stdio.h>
#include <stdlib.h>

int funcao(int m, int n, int **matriz){
    printf("entrou \n");
        for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                scanf("%d",&matriz[i][j]);
                }
        }
       for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                        if(i<j){
                                return 1;
                        }
                        else{
                                return 0;
                        }
                }
        }
}
int main(){
        int m1;
        int n1;
        printf("insira o valor para matriz\n");
        scanf("%d %d",&m1,&n1);
        int matriz1[m1][n1];

        int resultado  = funcao(m1,n1,matriz1);
        printf("resultado %d\n",resultado);
return 0;
}