#include <stdio.h>
#include <stdlib.h>

int main(){
	double nota1,nota2;
	printf("Digite o numero a nota1: ");
	scanf("%lf", &nota1);
	printf("Digite o numero a nota2: ");
	scanf("%lf", &nota2);

	if (nota1>nota2){
	 printf("O primeiro eh maior\n", nota1);
	}else{
	printf("O segundo eh maior\n", nota2);
	}
	if (nota1==nota2)
	printf("Numeros iguais");
	
	return (0);	
 }
