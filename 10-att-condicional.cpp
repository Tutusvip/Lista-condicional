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
        printf("Sua classifica�ao e A"); }
    
    else if(altura <= 1.20 && peso >60 && peso <90){
        printf("Sua classifica�ao e B"); }
    
    else if (altura <= 1.20 && peso >90){
     printf("Sua classifica�ao e G");  }
    
    else if (altura >= 1.20 && altura <=1.70 && peso < 60){
        printf("Sua classifica�ao e B"); }
    
    else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90){
         printf("Sua classifica�ao e E"); }
         
    else if(altura >= 1.20 && altura <=1.70 && peso>90){
         printf("Sua classifica�ao e H"); }
    else if (altura >=1.70 && peso <60){
        printf("Sua classifica�ao e C"); }
        
    else if(altura >=1.70 && peso >60 && peso <90){
        printf("Sua classifica�ao e F"); }
	 else if (altura >= 1.70 && peso >90){
        printf("Sua classifica�ao e I"); }
        
    return(0);
}
