#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto
{
  char nome[200];
  float preco;
  int estoque;
};

void atualizarEstoque(int *quantidadeEstoque, float preco, int quantidadeProduto) 
{
  *quantidadeEstoque -= quantidadeProduto;
  printf("Quantidade atual: %d\n", *quantidadeEstoque);
  printf("Preço total : %f\n", *quantidadeEstoque * preco);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int opcao;
  int escolha;
  int quantidadeDesejada;
  struct produto registro;

  printf("Deseja registrar algum produto?\n");
  printf("1 - SIM \n2 - NÃO\n");
  printf("Informe a opção desejada:");
  scanf("%d", &escolha);

  system("clear||cls");

  switch (escolha)
  {
    case 1:
      printf("nome do produto:");
      scanf("%s", registro.nome);
      printf("valor do produto: ");
      scanf("%f", &registro.preco);
      printf("quantidade no estoque:");
      scanf("%d", &registro.estoque);
      break;
      case 2:
      return 0;
      break;
    default:
    return 0;
      break;
  }

  do {
    printf("===== OPÇÕES DISPONÍVEIS =====\n");
    printf("1 - Realizar uma compra\n2 - Consultar estoque\n");
    printf("===============================\n");
    printf("Informe a opção desejada:");
    scanf("%d", &opcao);

    system("clear||cls");

    switch (opcao) {
      case 1:
        printf("Nome do produto: %s\n", registro.nome);
        printf("quantidade desejada: ");
        scanf("%d", &quantidadeDesejada);
        printf("Preço total em estoque: %f\n", registro.estoque * registro.preco);
        break;
      case 2:
        printf("Nome do produto: %s\n", registro.nome);
        printf("Quantidade em estoque: %d\n", registro.estoque);
        printf("Preço do produto: %f\n", registro.preco);
        return 0;
        break;
      default:
        break;
    }

  } while (opcao != 3);

  return 0;
}
