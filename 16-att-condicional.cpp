#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int ddd;
	
    printf("Forne�a o DDD :");
    scanf("%d",&ddd);
    
switch (ddd){
    case 61:
       printf ("Brasilia"); break;
    case 71:
       printf ("Salvador"); break;
    case 11:
       printf ("S�o Paulo"); break;
    case 21:
       printf ("Rio de Janeiro"); break;
    case 32:
       printf ("Juiz de Fora"); break;
    case 16:
       printf ("Campinas"); break;
    case 27:
       printf ("Vitoria"); break;
    case 31:
        printf("Belo Horizonte"); break;
    default:
    printf("N�o existe esse DDD"); break;
    }
    return(0);
}
