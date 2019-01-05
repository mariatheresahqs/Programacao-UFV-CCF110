#include <stdio.h>

int main() {
    int anos, meses, dias, idadeDias=0;
    printf("Declare sua idade em anos, meses e dias:\n");
    scanf("%d %d %d", &anos, &meses, &dias);
    idadeDias = anos*365 + meses*30 + dias;
    printf("A idade convertida em dia é %d.\n", idadeDias);
    return 0;
}