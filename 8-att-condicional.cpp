#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
    float mg,sp,rj,ms,venda;
    char estado[2];

    printf("Qual o valor da venda :");
    scanf("%f",&venda);

    printf("Qual o destino da venda :");
    fflush(stdin);
    scanf("%s", &estado);
    
    if (strcmp(estado,"MG")==0 || strcmp(estado,"mg")==0  )
    {
        mg= venda + (venda * 0.07);
        printf("O valor da venda para Minas Gerais e %.2f",mg);

    }else if(strcmp(estado,"SP")==0 || strcmp(estado,"sp")==0 )
        {
            sp= venda + (venda * 0.12);
            printf("O valor da venda para Sao Paulo e %.2f",sp);

        }else if(strcmp(estado,"RJ")==0|| strcmp(estado,"rj")==0)
         {
            rj= venda + (venda * 0.15);
            printf("O valor da venda para Rio de Janeiro e %.2f",rj);

        }else if (strcmp(estado,"MS")==0|| strcmp(estado,"ms")==0)
            {
                 ms= venda + (venda * 0.08);
                printf("O valor da venda para Mato Grosso do Sul e %.2f",ms);

            }else
               {
                  printf("Erro, o estado digitado nao esta no nosso banco de dados");
                }
            
}
