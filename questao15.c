#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se uma string é um palíndromo
int Palindromo(char str[])
{
  int i, j;
  int tamanho = strlen(str);

  // Remove espaços e converte para minúsculas
  for (i = 0, j = 0; i < tamanho; i++)
  {
    if (!isspace(str[i]))
    {
      str[j++] = tolower(str[i]);
    }
  }
  str[j] = '\0'; // Adiciona o caractere nulo ao final da string

  // Verifica se a string é um palíndromo
  for (i = 0, j = tamanho - 1; i < j; i++, j--)
  {
    if (str[i] != str[j])
    {
      return 0; // Não é um palíndromo
    }
  }

  return 1; // É um palíndromo
}

int main()
{
  char str[100];

  // Leitura da string
  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);

  // Remove a quebra de linha no final da string, se presente
  if (str[strlen(str) - 1] == '\n')
  {
    str[strlen(str) - 1] = '\0';
  }

  // Verifica se a string é um palíndromo
  if (Palindromo(str))
  {
    printf("A string \"%s\" é um palíndromo.\n", str);
  }
  else
  {
    printf("A string \"%s\" não é um palíndromo.\n", str);
  }

  return 0;
}
