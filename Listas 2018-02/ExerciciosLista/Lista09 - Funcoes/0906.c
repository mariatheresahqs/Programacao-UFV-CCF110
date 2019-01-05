#include <stdio.h>

int idadeDias(int anos, int meses, int dias){
    int anosDias, mesesDias, soma=0;
    anosDias = anos*365;
    mesesDias = meses*30;
    soma = anosDias + mesesDias + dias;
    return soma;
}

int main() {
    int AnosIdade, AnosMeses, AnosDias, diasIdade;
    printf("Declare sua idade em anos, meses e dias(apenas com um espaço entre os valores):\n");
    scanf("%d %d %d", &AnosIdade, &AnosMeses, &AnosDias);
    diasIdade = idadeDias(AnosIdade, AnosMeses, AnosDias);
    printf("O total de dias vividos é %d.\n", diasIdade);
    return 0;
}