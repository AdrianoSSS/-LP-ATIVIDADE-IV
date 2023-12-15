#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct contabancaria
{
    char conta[200];
    char titular[200];
    float saldo;
    float transferencia;
    float valordeposito;
    char tipodeConta[200];
};

float deposito(float valorinicial, float valordeposito)
{
    return valorinicial + valordeposito;
}

float saque(float valorinicial, float valordeposito)
{
    return valorinicial - valordeposito;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float depositoatualizado;
    float saqueatualizado;
	int opcao;

    struct contabancaria dados;

    do
    {
        printf("\nOPÇÕES\n");
        printf("1- Registro de conta \n2- Deposito \n3- Saque \n4-Sair do programa\n ");
        printf("Informe a opção desejada:\n") 
    	scanf("%d", &opcao);

        system("clear||cls");

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(dados.titular);

            printf("Número da conta: ");
            gets(dados.numeroconta);

            printf("Tipo de conta desejada: ");
            gets(dados.tipodeconta);

            printf("Qual saldo terá na conta: ");
            scanf("%f", &dados.saldo);
            system("clear || cls");
            break;

        case 2:

            printf("Quantia do deposito: ");
            scanf("%f", &dados.valordeposito);

            depositoatualizado = deposito(dados.saldo, dados.valordeposito);

            printf("Nome do titular: %s\n", dados.titular);
            printf("Número da conta: %s\n", dados.numeroconta);
            printf("Tipo da conta: %s\n", dados.tipodeconta);
            printf("Saldo pré-depósito: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", depositoatualizado);
            system("clear || cls");
            break;

        case 3:
            printf("qual quantidade você deseja sacar: ");
            scanf("%f", &dados.transferencia);
             
             system("clear || cls");
            saqueAtualizado = saque(dados.saldo, dados.transferencia);

            printf("Nome do titular: %s\n", dados.titular);
            printf("Número da conta: %s\n", dados.numeroconta);
            printf("Tipo da conta: %s\n", dados.tipodeConta);
            printf("Saldo pré-saque: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", saqueatualizado);
            break;
        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}
