#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    float altura,peso;
    
    printf("Qual sua altura: ");
    scanf("%f",&altura);
    printf("Qual sua peso: ");
    scanf("%f",&peso);
    
    if(altura <= 1.20 && peso < 60){
        printf("Sua classificaçao e A"); }
    
    else if(altura <= 1.20 && peso >60 && peso <90){
        printf("Sua classificaçao e B"); }
    
    else if (altura <= 1.20 && peso >90){
     printf("Sua classificaçao e G");  }
    
    else if (altura >= 1.20 && altura <=1.70 && peso < 60){
        printf("Sua classificaçao e B"); }
    
    else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90){
         printf("Sua classificaçao e E"); }
         
    else if(altura >= 1.20 && altura <=1.70 && peso>90){
         printf("Sua classificaçao e H"); }
    else if (altura >=1.70 && peso <60){
        printf("Sua classificaçao e C"); }
        
    else if(altura >=1.70 && peso >60 && peso <90){
        printf("Sua classificaçao e F"); }
	 else if (altura >= 1.70 && peso >90){
        printf("Sua classificaçao e I"); }
        
    return(0);
}
