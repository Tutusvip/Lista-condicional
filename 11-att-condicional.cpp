#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int n[3];
    float calculo;
    
    printf("Forneça os 3 numeros tendo em mente que o ultimo só pode ser 1 ,2 ,3 :");
    scanf("%d%d%d",&n[0],&n[1],&n[2]);
    
    if(n[2] ==1){
        calculo =n[0]*n[1]*n[2];
        printf("De acordo com a media geometrica o resultado é : %.2f",calculo);
    }
    
    else if (n[2] ==2){
        calculo =((n[0]+2)*(n[1]+3)*n[2])/6;
        printf("De acordo com a media ponderada o resultado é : %.2f",calculo);
    }
    
    else if (n[2] ==3){
        calculo = 1/((1/n[0])+(1/n[1])+(1/n[2]));
        printf("De acordo com a media harmonica o resultado é : %.2f",calculo);
    } else if (n[2] ==3){
        calculo = (n[0]+n[1]+n[2])/3;
        printf("De acordo com a media aritimetica o resultado é : %.2f",calculo);
    }else{
        printf("O segundo numero so pode se 1 , 2 , 3");
    }

    return(0);
}
