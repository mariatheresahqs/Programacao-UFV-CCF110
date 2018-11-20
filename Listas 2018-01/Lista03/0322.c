#include <stdio.h>

int main() {
    int voto,total1=0,total2=0,total3=0,total4=0, totalVotos=0, totalNulos=0, totalBrancos=0;
    float percentualBN;
    while(1){
        printf("Declare seu voto:\n");
        scanf("%d", &voto);
        if(voto==-1){
            break;
        }
        else if(voto==1){
            total1+=1;
        } else if(voto==2){
            total2+=1;
        } else if(voto==3){
            total3+=1;
        } else if(voto==4){
            total4+=1;
        } else if(voto==5){
            totalNulos+=1;
        } else if(voto==6){
            totalBrancos+=1;
        } else if(voto>6 || voto<-1){
            printf("Voto inválido.\n");
        }
        totalVotos+=1;
    }
    percentualBN = (float)(totalBrancos+totalNulos)/(float)totalVotos;

    printf("O total de votos do candidato 1 foi %d.\n", total1);
    printf("O total de votos do candidato 2 foi %d.\n", total2);
    printf("O total de votos do candidato 3 foi %d.\n", total3);
    printf("O total de votos do candidato 4 foi %d.\n", total4);
    printf("O total de votos nulos foi %d.\n", totalNulos);
    printf("O total de votos em branco foi %d.\n", totalBrancos);
    printf("O percentual de votos brancos e nulos foi %.2f.\n", percentualBN);

    return 0;
}