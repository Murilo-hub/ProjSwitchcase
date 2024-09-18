#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a, b;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("1. 1 a 10 \n");
		printf("2. 1 a 20 \n");
		printf("3. 1 a 30 \n");
		printf("4. 1 a 40 \n");
		printf("0. Sair do programa \n");
		printf("Digite uma das opcoes: \n");
		scanf("%d", &a);
		
		switch(a){
			case 1:
				printf("Dgite um valor de 1 a 10: ");
				scanf("%d", &b);
				if(b < 1 || b > 10){
					printf("Voce nao obedeceu aos criterios, retornando a pagina inicial.. \n");
				} else{
					printf("Obrigado por obedecer, aqui esta seu numero: %d \n", b);
				};
				
				break;
				
			case 2:
				printf("Dgite um valor de 1 a 20: ");
				scanf("%d", &b);
				if(b < 1 || b > 20){
					printf("Voce nao obedeceu aos criterios, retornando a pagina inicial.. \n");
				} else{
					printf("Obrigado por obedecer, aqui esta seu numero: %d \n", b);
				};
				
				break;
				
			case 3:
				printf("Dgite um valor de 1 a 30: ");
				scanf("%d", &b);
				if(b < 1 || b > 30){
					printf("Voce nao obedeceu aos criterios, retornando a pagina inicial.. \n");
				} else{
					printf("Obrigado por obedecer, aqui esta seu numero: %d \n", b);
				};
				
				break;
				
			case 4:
				printf("Dgite um valor de 1 a 40: ");
				scanf("%d", &b);
				if(b < 1 || b > 40){
					printf("Voce nao obedeceu aos criterios, retornando a pagina inicial.. \n");
				} else{
					printf("Obrigado por obedecer, aqui esta seu numero: %d \n", b);
				};
				
				break;
			
			defaut:
				printf("Digite uma opcao valida! \n");
				break;
		}
	}while (a != 0);
	
	printf("Voce saiu do programa.");
	
	return 0;
}
