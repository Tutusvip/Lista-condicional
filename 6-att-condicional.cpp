#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
    float altura=0.0,homem,mulher,peso; 
    char sexo;
    
    printf("Qual e seu sexo (M)asculino (F)eminino :");
    scanf("%s", &sexo);
    fflush(stdin);
    printf("Qual a sua altura :");
    scanf("%f", &altura);
    fflush(stdin);
    
    if (sexo =='M'||sexo =='m'){
       homem = (72.7 * altura) - 58;
       printf("\nSeu peso ideal e %.2f",homem); 
    } else{
		if(sexo == 'F'||sexo =='f'){
        	mulher = (62.1 * altura) - 44.7;
        	printf("\nSeu peso ideal e %.2f",mulher);
			}else{
        		printf("\nVoce nao informou seu sexo logo nao foi possivel calcular sua altura ideal");
				}
			
}
    return(0);
    }
