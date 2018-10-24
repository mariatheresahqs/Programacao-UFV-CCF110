#include <stdio.h>

int main() {
    int funcionarias, servicos, i=0, j=0;
    funcionarias = 5;
    servicos = 3;
    int tabelaRegistros[funcionarias][servicos];
    float faturamento=0, corte, depilacao, podologia;
    corte = 10.0;
    depilacao = 15.0;
    podologia = 30.0;

    for(i=0;i<funcionarias;i++){
        printf("Digite todos os serviços prestados pela funcionária %d: \n", i+1);
        for(j=0;j<servicos;j++){
            scanf("%d", &tabelaRegistros[i][j]);
        }
    }
    for(i=0;i<funcionarias;i++){
            faturamento = (corte*tabelaRegistros[i][0] + depilacao*tabelaRegistros[i][1] + podologia*tabelaRegistros[i][2])/2;
            printf("A funcionária %d irá receber %.2f pelos serviços prestados. \n", i+1, faturamento);
    }



    return 0;
}