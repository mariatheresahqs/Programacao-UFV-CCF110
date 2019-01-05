//Reescreva o programa abaixo usando ponteiros
/*
 int main ()
{
float matrx [50][50]; int i,j;
for (i=0;i<50;i++)
for (j=0;j<50;j++) matrx[i][j]=0.0;
return(0);
}
 */

#include <stdio.h>

int main() {
    float matriz[50][50], *ponteiro;
    ponteiro = &matriz[0][0];
    int i, j;
    for(i=0;i<50;i++){
        for(j=0;j<50;j++){
            *(ponteiro+i) = 0.0;
        }
    }
    for(i=0;i<50;i++){
        for(j=0;j<50;j++){
            printf("%.1f ", *(ponteiro+i));
        }
        printf("\n");
    }
    return 0;
}