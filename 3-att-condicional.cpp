#include <stdio.h>

int main(){
	int n1;
	printf("Digite o numero: ");
	scanf("%i", &n1);
	
	if (n1 % 2==0){
	 printf("O primeiro numero eh par\n", n1);
	}else{
	printf("O segundo numero eh impar\n");
	}

	return (0);	
 }

