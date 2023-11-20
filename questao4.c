#include <stdio.h>

int main()
{
  char g[10];
  char respostas[10];
  int i, j;
  int acertos;

  // leitura do gabarito
  for (i = 0; i < 10; i++)
  {
    printf("Digite o gabarito da prova %d questão: ", i + 1);
    scanf(" %c", &g[i]);
  }

  // para cada aluno
  for (i = 0; i < 50; i++)
  {
    acertos = 0;

    // leitura das respostas do aluno
    printf("Aluno %d - Digite suas respostas (10 caracteres): ", i + 1);
    for (j = 0; j < 10; j++)
    {
      scanf(" %c", &respostas[j]);

      if (respostas[j] == g[j])
      {
        acertos++;
      }
    }

    // exibição final do resultado
    printf("O aluno %d acertou %d questões. \n ", i + 1, acertos);
    if (acertos >= 6)
    {
      printf("Aluno Aprovado\n");
    }
    else
    {
      printf("Aluno Reprovado\n");
    }
  }

  return 0;
}
