#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int i;
	
    printf("Forna�a o dia da semana: ");
    scanf("%d",&i);
    
    switch (i){
    case 1:
       printf ("Hj � domingo"); break;
	case 2:
       printf ("Hj � segunda"); break;
    case 3:
       printf ("Hj � ter�a"); break;
    case 4:
       printf ("Hj � quarta"); break;
    case 5:
       printf ("Hj � quinta"); break;
    case 6:
       printf ("Hj � sexta"); break;
    case 7:
       printf ("Hj � sabado"); break;
    default:
    printf("Esse dia n�o existe"); break;
    }
    return(0);
}
