#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int y,x;
    
    printf("Forneça a posição x: ");
    scanf("%d",&x);
    printf("Forneça a posição y: ");
    scanf("%d",&y);
    
    if (x>0 && y>0){
        printf("O ponto se encontra no 1 quadrante\n");
    }
	else if(x<0 && y>0){
        printf("O ponto se encontra no 2 quadrante\n");
    }
    else if (x<0 && y<0){
        printf("O ponto esta no 3 quadrante\n ");
    }
	else if(x>0 && y<0){
        printf("O ponto se encontra no 4 quadrante\n");
    }
	else if (x == 0 && y ==0){
        printf("Origem\n");
    }
	else if (x == 0){
        printf("Eixo x\n");
    }
	else if (y==0){
        printf("Eixo y\n");
    }
    
    return(0);
}
