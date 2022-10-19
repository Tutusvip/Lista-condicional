#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese_Brazil");
    int prestacao ;
    float salario ;
    
    printf("forenaça o salario do funcionario :");
    scanf("%f",&salario);
    printf("forenaça a prestação do funcionario :");
	scanf("%d",&prestacao);
	
    if (prestacao > salario *0.2)
    {
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
	}
	return(0);
}

