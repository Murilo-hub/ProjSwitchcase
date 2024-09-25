#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    int op;
    float valor1 = 0, valor2 = 0, soma, subtracao, multiplicacao, divisao, porcentagem, resultado;

    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("===========================================================\n");
        printf("BEM-VINDO A CALCULADORA MAIS PAIA DOS PROGRAMADORES!!\n");
        printf("1. Cadastrar valores;\n");
        printf("2. Ler valores;\n");
        printf("3. Editar valores;\n");
        printf("4. Deletar valores;\n");
        printf("5. Realizar uma operacao matematica;\n");
        printf("0. Sair;\n");
        printf("Escolha o que voce quer fazer: ");
        scanf("%d", &op);
    
        switch (op)
        {
            case 1:
                printf("Digite o primeiro valor: \n");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: \n");
                scanf("%f", &valor2);
                break;

            case 2:
                printf("Este e o valor 1: %.2f\n", valor1);
                printf("Este e o valor 2: %.2f\n", valor2);
                break;

            case 3:
                printf("Digite um novo dado para o valor 1: ");
                scanf("%f", &valor1);
                printf("Digite um novo dado para o valor 2: ");
                scanf("%f", &valor2);
                break;

            case 4:
                printf("Deletando os valores predefinidos pelo usu√°rio...\n");
                valor1 = 0;
                valor2 = 0;
                printf("Deletado com sucesso... Retornando ao menu!\n");
                break;

            case 5:
                do {
                    printf("===========================================================\n");
                    printf("VOCE ACESSOU O MENU DE OPERACOES!!\n");
                    printf("1. Soma;\n");
                    printf("2. Subtracao;\n");
                    printf("3. Multiplicacao;\n");
                    printf("4. Divisao;\n");
                    printf("5. Porcentagem;\n");
                    printf("6. Voltar ao menu;\n");
                    printf("Qual operacao voce deseja realizar: ");
                    scanf("%d", &op);
                    
                    switch (op)
                    {
                        case 1:
                            soma = valor1 + valor2;
                            printf("A soma dos valores: %.2f + %.2f = %.2f\n", valor1, valor2, soma);
                            break;

                        case 2:
                            subtracao = valor1 - valor2;
                            printf("A subtracao dos valores: %.2f - %.2f = %.2f\n", valor1, valor2, subtracao);
                            break;

                        case 3:
                            multiplicacao = valor1 * valor2;
                            printf("A multiplicacao dos valores: %.2f * %.2f = %.2f\n", valor1, valor2, multiplicacao);
                            break;

                        case 4:
                            if (valor2 != 0)
                            {
                                divisao = valor1 / valor2;
                                printf("A divisao dos valores: %.2f / %.2f = %.2f\n", valor1, valor2, divisao);
                            }
                            else
                            {
                                printf("Erro: divisao por zero!\n");
                            }
                            break;

                        case 5:
                            resultado = (valor1 / 100) * valor2;
                            printf("%.2f %% de %.2f È igual a: %.2f\n", valor1, valor2, resultado);
                            
                            break;
                            
                        case 6:
                        	printf("Voltando ao menu principal...\n");
                        	break;

                        default:
                            if (op < 1 || op > 6)
                            {
                                printf("Selecione uma opcao valida!\n");
                            }
                    }
                } while (op != 6);
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                if (op < 0 || op > 5)
                {
                    printf("Selecione uma opcao valida!\n");
                }
        }
    } while (op != 0);

    return 0;
}
