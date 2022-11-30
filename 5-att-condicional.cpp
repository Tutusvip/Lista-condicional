#include <stdio.h>
#inlclude <stdlib.h>
#include <math.h>

int main(){
    int numero ,quadrado;
    float raiz;
    printf("Por favor me de o numero desejado :");
    scanf("%d",&numero);
    if (numero > 0)
    {
       quadrado = pow(numero,2);
       raiz = sqrt(numero);
       printf("O %d elevado ao quadrado e %d\nja a raiz desse mesmo numero e %.2f",numero,quadrado,raiz);
    }else if(numero == 0)
    {
        printf("Esse numero nao e nem positivo nem negativo");
    }else
    {
        printf("Esse numero e negativo e nao sera calculado");
    }
