#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

struct aluno
{
    char nome[200];
    char nascimento[200];

};

float calcularMedia (float nota[])
{
	int i;
	float soma = 0;
	float media;
	
	 for (i = 0; i < 2; i++)
	 {
	 	soma += nota[i];
	 }
	 media = soma / 2;
	 
	 return media;
}

char *validando (float media)
{
	char validando[200];
	
	if (media >= 7)
	{
		printf ("Aprovado");
	} 
	else 
	{
		printf ("Reprovado");
	}
	return validando;
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    struct aluno validacao[5];
    int i;
    int j;
	float nota[2];
	float mediatotal;
	
    for (i = 0; i < TAM; i++)
    {
        printf(" nome do %dº aluno:", i + 1);
        gets(validacao[i].nome);
        printf(" data de nascimento do %dº aluno:", i + 1);
        gets(validacao[i].nascimento);

        for (j = 0; j < 2; j++)
        {
            printf("Informe a %dº nota:", j + 1);
            scanf("%f", &nota[j]);
			
		}
       system("cls||clear");
		mediatotal = calcularMedia(nota);  
    
    printf ("MEDIA ALUNO: %.1f\n", mediatotal );
    printf ("\nResultado Final %s\n", validando(mediatotal));
    printf ("\n");
    fflush(stdin);
	
	}
	return 0;
}
