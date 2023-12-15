#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 250

struct dados 
{
  char nome[200];
  char cargo[200];
  float salario;
};

float mediaSalario(struct dados funcionario[], int total) 
{
  int contador = 0;
  float soma = 0;

  for (int i = 0; i < total; i++) 
  {
    if (strcmp(funcionario[i].cargo, "Programador") == 0) 
    {
      contador++;
      soma += funcionario[i].salario;
    }
  }

  if (contador > 0) 
  {
    return soma / (float)contador;
  } else {
    return 0;
  }
}

int main() 
{
  setlocale(LC_ALL, "portuguese");
  int opcao = 0;
  int i = 0;
  struct dados funcionario[TAM];

  do 
  {
    printf("=====TABELA DE OPÇÕES=====\n");
    printf("1 - Adicionar informação\n2 - Exibir\n");
    printf("Digite aqui a opção desejada: ");
    scanf("%d", &opcao);
    system("cls||clear");

    switch (opcao) 
    {
    case 1:
      fflush(stdin);

      printf("nome do %dº funcionário: ", i + 1);
      scanf(" %s", funcionario[i].nome);

      printf("cargo: ");
      scanf(" %s", funcionario[i].cargo);

      printf("valor do salario: ");
      scanf("%f", &funcionario[i].salario);
      i++;
      system("cls||clear");
      break;

    case 2:
      printf("média salarial de programadores: R$ %.2f\n",
      mediaSalario(funcionario, i));
     return 0;
     break;

    default:
    return 0;
      break;
    }

  } while (opcao != 3);

  return 0;
}
