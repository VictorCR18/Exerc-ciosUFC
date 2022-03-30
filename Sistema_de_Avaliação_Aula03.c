#include <stdio.h>
#include <locale.h>

void Nome(){
	
char nome[20], sobre[20];
	
printf("Digite seu nome: \n");
gets(nome);

printf("Digite seu sobrenome: \n");
gets(sobre);

printf("Olá %s %s, Bem-Vindo ao Sistema de Avaliação!\n", nome, sobre);

}

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Nome();
	
	float n1, n2, n3, m, AF;
	int a = 1;
		
	while(a==1){
		
		printf(" Digite a n1: \n");
		scanf("%f", &n1);
	
		printf(" Digite a n2: \n");
		scanf("%f", &n2);
	
		printf(" Digite a n3: \n");
		scanf("%f", &n3);
	
		m = (n1 + n2 + n3)/3;
		
		if(m>=7){
			
			printf("\n Aprovado\n");
			printf(" Sua média foi: %3.2f\n", m);
		
		}else if(m>=4){
			
			printf(" Vai fazer AF\n");
			printf(" Sua média foi: %3.2f\n", m);

			printf(" Nota da AF: \n");
			scanf("%f", &AF);
	
	  		if(AF >= 5){
	   			printf(" Aprovado");
	  		}else{
	   			printf(" Reprovado");
	  		}
		
		}else{
			
			printf(" Reprovado\n");
			printf(" Sua média foi: %3.2f\n", m);
			
		}
		
		printf("\n Tentar novamente?\n 1 - SIM \n 2 - NÂO\n");
		scanf("%d", &a);
		
	}
	

	
}



