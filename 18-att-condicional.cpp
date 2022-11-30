#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int i ,por3,por5;
    
    printf("Digite o numero: ");
    scanf("%d",&i);
    
	por3= i % 3;
	por5= i % 5;
  
    if (por3==0 && por5==0){
        printf("Esse numero não pode pois é divisivel por 3 e por 5");
    }
    else if(por3==0){
        printf("Numero divisivel por 3");
    }
	else if(por5==0){
        printf("Numero divisivel por 5");
    } 
	else if(por3>0 && por5 > 0){
        printf("Numero não divisivel nem por 3 e nem por 5");
    }
    
    return(0);
}
