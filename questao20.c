#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

void encontrarMaiorPalavra(char frase[])
{
  char palavraMaisLonga[TAMANHO_MAX] = "";
  char palavraAtual[TAMANHO_MAX] = "";
  int tamanhoPalavraMaisLonga = 0;

  int i;
  int tamanhoFrase = strlen(frase);

  for (i = 0; i <= tamanhoFrase; i++)
  {
    if (frase[i] != ' ' && frase[i] != '\0')
    {
      strncat(palavraAtual, &frase[i], 1); // Adiciona o caractere à palavra atual
    }
    else
    {
      if (strlen(palavraAtual) > tamanhoPalavraMaisLonga)
      {
        tamanhoPalavraMaisLonga = strlen(palavraAtual);
        strcpy(palavraMaisLonga, palavraAtual); // Atualiza a palavra mais longa encontrada
      }
      palavraAtual[0] = '\0'; // Reseta a palavra atual para a próxima palavra
    }
  }

  printf("A maior palavra na frase é: %s\n", palavraMaisLonga);
}

int main()
{
  char frase[TAMANHO_MAX];

  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  frase[strcspn(frase, "\n")] = '\0'; // Remove a quebra de linha do final da string

  encontrarMaiorPalavra(frase);

  return 0;
}

