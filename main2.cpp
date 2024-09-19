#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    int op;
    float valor1 = 0, valor2 = 0, soma, subtracao, multiplicacao, divisao;

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
        printf("Escolha o que você quer fazer: ");
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
                printf("Este é o valor 1: %.2f\n", valor1);
                printf("Este é o valor 2: %.2f\n", valor2);
                break;

            case 3:
                printf("Digite um novo dado para o valor 1: ");
                scanf("%f", &valor1);
                printf("Digite um novo dado para o valor 2: ");
                scanf("%f", &valor2);
                break;

            case 4:
                printf("Deletando os valores predefinidos pelo usuário...\n");
                valor1 = 0;
                valor2 = 0;
                printf("Deletado com sucesso... Retornando ao menu!\n");
                break;

            case 5:
                do {
                    printf("===========================================================\n");
                    printf("VOCÊ ACESSOU O MENU DE OPERAÇÕES!!\n");
                    printf("1. Soma;\n");
                    printf("2. Subtração;\n");
                    printf("3. Multiplicação;\n");
                    printf("4. Divisão;\n");
                    printf("5. Voltar ao menu;\n");
                    printf("Qual operação você deseja realizar: ");
                    scanf("%d", &op);
                    
                    switch (op)
                    {
                        case 1:
                            soma = valor1 + valor2;
                            printf("A soma dos valores: %.2f + %.2f = %.2f\n", valor1, valor2, soma);
                            break;

                        case 2:
                            subtracao = valor1 - valor2;
                            printf("A subtração dos valores: %.2f - %.2f = %.2f\n", valor1, valor2, subtracao);
                            break;

                        case 3:
                            multiplicacao = valor1 * valor2;
                            printf("A multiplicação dos valores: %.2f * %.2f = %.2f\n", valor1, valor2, multiplicacao);
                            break;

                        case 4:
                            if (valor2 != 0)
                            {
                                divisao = valor1 / valor2;
                                printf("A divisão dos valores: %.2f / %.2f = %.2f\n", valor1, valor2, divisao);
                            }
                            else
                            {
                                printf("Erro: divisão por zero!\n");
                            }
                            break;

                        case 5:
                            printf("Voltando ao menu principal...\n");
                            break;

                        default:
                            if (op < 1 || op > 5)
                            {
                                printf("Selecione uma opção válida!\n");
                            }
                    }
                } while (op != 5);
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                if (op < 0 || op > 5)
                {
                    printf("Selecione uma opção válida!\n");
                }
        }
    } while (op != 0);

    return 0;
}
