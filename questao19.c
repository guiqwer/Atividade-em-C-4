#include <stdio.h>
#include <string.h>

int contarOcorrencias(const char *frase, const char *palavra)
{
  int ocorrencias = 0;
  int tamanhoFrase = strlen(frase);
  int tamanhoPalavra = strlen(palavra);

  for (int i = 0; i <= tamanhoFrase - tamanhoPalavra; i++)
  {
    // Verificar se a substring da frase é igual à palavra
    if (strncmp(&frase[i], palavra, tamanhoPalavra) == 0)
    {
      ocorrencias++;
    }
  }

  return ocorrencias;
}

int main()
{
  char frase[1000];
  char palavra[100];

  // Solicitar ao usuário que digite uma frase
  printf("Digite uma frase:\n");
  fgets(frase, sizeof(frase), stdin);

  // Remover o caractere de nova linha (\n) da entrada da frase
  frase[strcspn(frase, "\n")] = '\0';

  // Solicitar ao usuário que digite uma palavra
  printf("Digite uma palavra:\n");
  scanf("%s", palavra);

  // Contar o número de ocorrências da palavra na frase
  int ocorrencias = contarOcorrencias(frase, palavra);

  // Imprimir o resultado
  printf("Temos que a palavra ocorre %d vezes na frase.\n", ocorrencias);

  return 0;
}
