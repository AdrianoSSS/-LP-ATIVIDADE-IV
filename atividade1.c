#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct dados_pessoal
{
    char nome[200];
    char telefone[200];
    char email[200];
};

char *validando(struct dados_pessoal contato[], char *buscando)
{
    int i;

    for (i = 0; i < TAM; i++)
    {

        if (strcmp(contato[i].nome, buscando) == 0)
        {

            printf("O numero desejado: %s\n", contato[i].telefone);
            return;
        }
        printf("\nContato nao encontrado.\n");
        system("clear||cls");

    }
}

int main()
{
    int i;
    char buscando[200];

    struct dados_pessoal contato[TAM];

    for (i = 0; i < TAM; i++)
    {
    	printf ("INFORMACOES %d CONTATO: \n", i+1);
    	
        printf("Digite o nome: \n");
        gets(contato[i].nome);

        printf("Digite o telefone: \n");
        gets(contato[i].telefone);

        printf("Digite o e-mail: \n");
        gets(contato[i].email);
        system("clear||cls");


        printf("\n");
    }
    
	fflush(stdin);
	system ("cls||clear");
	
    printf("Busca de contatos : \n");
    printf("Digite um nome para saber o numero de contato: ");
    gets(buscando);

    validando(contato,buscando);

    return 0;
}
