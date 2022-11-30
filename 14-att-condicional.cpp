#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int x;
    
	printf("Forneça a posição do mes:");
    scanf("%d",&x);
    
 switch (x)
 {
 case 1:
    printf("Janeiro"); break;
 case 2:
    printf("fevereiro "); break;
case 3:
    printf("Marco"); break;
case 4:
    printf("Abriu"); break;
case 5:
    printf("Maio"); break;
case 6:
    printf("Junho"); break;   
case 7:
    printf("Julho"); break;
case 8:
    printf("Agosto");break;
case 9:
    printf("Setembro"); break;
case 10:
    printf("Outubro"); break;
case 11:
    printf("Novembro"); break;
case 12:
    printf("Dezembro"); break;
 default:
 printf("Mes não selecionado ou inexistente"); break;
 }   
    return(0);
}
