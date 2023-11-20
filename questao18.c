#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Delimitador(char c)
{
  return c == ' ' || c == '\n' || c == '\t' || c == '\r';
}

int contarPalavras(const char *frase)
{
  int palavras = 0;
  int tamanho = strlen(frase);
  bool dentroDaPalavra = false;

  for (int i = 0; i < tamanho; i++)
  {
    if (Delimitador(frase[i]))
    {
      dentroDaPalavra = false;
    }
    else if (!dentroDaPalavra)
    {
      dentroDaPalavra = true;
      palavras++;
    }
  }

  return palavras;
}

int main()
{
  char frase[1000];

  printf("Digite uma frase:\n");
  fgets(frase, sizeof(frase), stdin);

  int numPalavras = contarPalavras(frase);

  printf("O número de palavras na frase é: %d\n", numPalavras);

  return 0;
}
