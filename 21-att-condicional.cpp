#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    float a,b,c,delta,raiz,raiz2;
    printf("Me forneca o \"A\":");
    scanf("%f",&a);
    printf("Me forneca o \"B\":");
    scanf("%f",&b);
    printf("Me forneca o \"C\":");
    scanf("%f",&c);
    
        if (a== 0){
            printf("Não é equação de segundo grau");
        }else{
            delta = pow(b,2) - 4 * a * c;
        if (delta <0 ){
            printf("Não existe raiz");
        }else if (delta == 0){
        	raiz= (-1*b) /(2*a);
           printf("raiz unica e com valor de %.2f",raiz) ;
        }else if (delta >0){
            raiz =((-1*b) + sqrt(delta)) /(2*a);
            raiz2 =((-1*b) - sqrt(delta)) /(2*a);
            printf("As raizes são %.1f e %.1f",raiz,raiz2);
        }
        
    
    }

    return(0);
}
