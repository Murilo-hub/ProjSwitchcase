#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int a, b;
	
	setlocale(LC_ALL, "Portuguese");
	
	do
    {
        printf("\n ========================================================== \n");
		printf("1. Criar um valor \n");
		printf("2. Ler um valor \n");
		printf("3. Editar um valor \n");
		printf("4. Deletar um valor \n");
		printf("0. Sair do programa \n");
        printf("========================================================== \n");
		printf("Escolha o que deseja fazer: ");
		scanf("%d", &a);
		
		switch(a)
        {
			case 1:
                do{
				    printf("Digite um valor para cria-lo: ");
                    scanf("%d", &b);

                    if (b == 0)
                    {
                        printf("Digite um valor diferente de zero(0)! \n");
                    }
                    
                }while(b == 0);

                break;

            case 2:
                if(b > 0 || b < 0){
                printf("Aqui esta o valor de sua variavel: %d", b);
                }else{
                    printf("Parece que voce nao possui um valor, tente criar um antes de ler sua variavel.. \n");
                }
                break;

            case 3:
                if(b > 0 || b < 0){
                printf("Digite um novo valor para sua variavel: ");
                scanf("%d", &b);
                }else{
                    printf("Parece que voce nao possui um valor, tente criar um antes de editar sua variavel.. \n");
                }
                break;
            
            case 4:
                if(b > 0 || b < 0){
                printf("Deletando a sau variavel e restaurando ela para padrao..");
                b = 0;
                }else{
                    printf("Parece que voce nao possui um valor, tente criar um antes de deletar sua variavel.. \n");
                }
                break;

            default:
                if(a != 0 || a > 4){
                printf("Selecione uma opção valida. \n");
                }
                break;
        }

	}while (a != 0);
	
	printf("Voce saiu do programa.");
	
	return 0;
}