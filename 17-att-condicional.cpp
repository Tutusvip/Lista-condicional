#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int i;
    float numero[2],calculo;
    
    printf("Escolha uma das opções a baixo :\n");
    printf("(1)a+b = x\n(2)a-b = x\n(3)a*b = x\n(4)a/b = x\n");
    scanf("%d",&i);
   
    if(i>=5 || i <= 0 ){
        printf("Opção não selecionada ");
    }else{
    printf("ForneÇa os numeros\n");
    printf("Numeros 1:");
    scanf("%f",&numero[0]);
    printf("Numeros 2:");
    scanf("%f",&numero[1]);
    
        switch (i)
        {
        case 1:
            calculo = numero[0]+numero[1]; 
            printf("O calculo escolhido foi a+b = x\nE o resultado é %.2f",calculo); break;
        case 2:
            calculo = numero[0]-numero[1] ;
        	printf("O calculo escolhido foi a-b = x\nE o resultado é %.2f",calculo); break;
        case 3:
            calculo = numero[0]*numero[1]; 
			printf("O calculo escolhido foi a*b = x\nE o resultado é %.2f",calculo); break;
        case 4:
            calculo = numero[0]/numero[1] ;
        	printf("O calculo escolhido foi a/b = x\nE o resultado é %.2f",calculo); break;
        default: break;
        }
    }
    return(0);
}
