#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int x;
    
    printf("Forne�a a posi��o do mes :");
    scanf("%d",&x);
    
    if (x == 1){
     printf("Esse mes � janeiro");
    }else if(x ==2){
     printf("Esse mes � fevereiro");   
    }
    else if ( x == 3){
     printf("Esse mes � marco");   
    }
	else if( x==4){
     printf("Esse mes � abril");
    }
	else if ( x==5){
     printf("Esse mes � maio ");   
    }
	else if (x==6){
     printf("Esse mes � junho");    
    }
	else if (x==7){
     printf("Esse mes � julho");   
    } 
	else if (x == 8){
     printf("Esse mes � agosto");
    }
	else if(x ==9){
     printf("Esse mes � setembro ");
    }
	else if ( x == 10){
     printf("Esse mes � outubro");    
    }
	else if( x==11){
     printf("Esse mes � novembro");
    }
	else if ( x==12){
     printf("Esse mes � dezembro ");   
    }
	else if (x>12 || x<=0){
     printf("Esse mes n�o existe ");   
    }
    
    return(0);
}
