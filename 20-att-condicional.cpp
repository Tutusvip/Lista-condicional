#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int main (){
    int i;
    float n[4],media,recu,mediarecu;
    float peso[4]={2.0,3.0,4.0,1.0};
    
    for ( i = 0; i < 4; i++){
       printf("Qual as nota %d do aluno ",i+1);
       scanf("%f",&n[i]);
       if (n[i]>10){
        n[i] =10;
       }
    }
    
    media = ((n[0]*peso[0])+(n[1]*peso[1])+(n[2]*peso[2])+(n[3]*peso[3]))/10.0;
    
    if (media >=7.0){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado\n");
    }
    else if (media <= 5.0){
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado\n");
    }
    else if(media > 5.0 && media <=6.9){
        printf("Aluno em exame.\n");
        printf("Qual a nota do aluno em exame :");
        scanf("%f",&recu);
        printf("Nota do exame:%.1f\n",recu);
        printf("Em exame com media%f",media);
        
        mediarecu = (recu + media) /2.0;
        
        if (mediarecu >=5.0){
            printf("Aluno aprovado\n");
            printf("Media final:%.1f",mediarecu);
        }
		else if (media < 5.0){
            printf("Aluno reprovado");
            printf("Media final:%.1f",mediarecu);
        }
    }
    return(0);
}
