#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int i;
	
    printf("Fornaça o dia da semana: ");
    scanf("%d",&i);
    
    switch (i){
    case 1:
       printf ("Hj é domingo"); break;
	case 2:
       printf ("Hj é segunda"); break;
    case 3:
       printf ("Hj é terça"); break;
    case 4:
       printf ("Hj é quarta"); break;
    case 5:
       printf ("Hj é quinta"); break;
    case 6:
       printf ("Hj é sexta"); break;
    case 7:
       printf ("Hj é sabado"); break;
    default:
    printf("Esse dia não existe"); break;
    }
    return(0);
}
