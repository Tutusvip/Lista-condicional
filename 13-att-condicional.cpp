#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int x;
    
    printf("Forneça a posição do mes :");
    scanf("%d",&x);
    
    if (x == 1){
     printf("Esse mes é janeiro");
    }else if(x ==2){
     printf("Esse mes é fevereiro");   
    }
    else if ( x == 3){
     printf("Esse mes é marco");   
    }
	else if( x==4){
     printf("Esse mes é abril");
    }
	else if ( x==5){
     printf("Esse mes é maio ");   
    }
	else if (x==6){
     printf("Esse mes é junho");    
    }
	else if (x==7){
     printf("Esse mes é julho");   
    } 
	else if (x == 8){
     printf("Esse mes é agosto");
    }
	else if(x ==9){
     printf("Esse mes é setembro ");
    }
	else if ( x == 10){
     printf("Esse mes é outubro");    
    }
	else if( x==11){
     printf("Esse mes é novembro");
    }
	else if ( x==12){
     printf("Esse mes é dezembro ");   
    }
	else if (x>12 || x<=0){
     printf("Esse mes não existe ");   
    }
    
    return(0);
}
