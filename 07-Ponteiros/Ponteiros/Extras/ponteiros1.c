#include<stdio.h>
#include<math.h>

float delta(int *a, int *b, int*c);
void raizesReais(int *a, int *b, int *c); 
int isFuncaoQuadratica(int *a);

int main(){
    int a, b, c;
    printf("Declare os valores de a, b, c da equação de segundo grau:\n");
    
    printf("a:");
    scanf("%d", &a);
    if(isFuncaoQuadratica(&a))
        return 0;

    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);
    raizesReais(&a, &b, &c);
    
    return 0;
}

int isFuncaoQuadratica(int *a)
{
    if (*a == 0)
    {
        printf("Essa função não é quadrática.\n");
        return 1;
    }
    return 0;
}

float delta(int *aa, int *bb, int *cc){
    int a=*aa, b=*bb, c=*cc, deltaResultado;
    deltaResultado = b*b - 4*(a*c);
    if(deltaResultado<0){
        printf("A equação não possui resultados reais.\n");
        return -1;
    }
    return deltaResultado;
}

void raizesReais(int *a, int *b, int *c)
{
    float resultadoDelta, raiz1, raiz2;
    int a1=*a, b1=*b;
    resultadoDelta = delta(a, b, c);
    if( resultadoDelta!= -1){
        raiz1 = (-(b1) + sqrt(resultadoDelta)) / 2 * a1;
        raiz2 = (-(b1)- sqrt(resultadoDelta)) / 2 * a1;
        printf("%.2f %.2f\n", raiz1, raiz2);
    }
}