#include <stdio.h>
#include <string.h>

// Função para eliminar espaços em branco repetidos em uma string
void eliminarEspacosRepetidos(char str[])
{
  int i, j;
  int tamanho = strlen(str);

  // Variável para controlar se o caractere anterior era um espaço em branco
  int espacoAnterior = 0;

  // Itera sobre a string
  for (i = 0, j = 0; i < tamanho; i++)
  {
    // Se o caractere atual não for um espaço em branco ou
    // se o caractere anterior não foi um espaço em branco,
    // copia o caractere para a nova string
    if (str[i] != ' ' || !espacoAnterior)
    {
      str[j++] = str[i];
      espacoAnterior = (str[i] == ' '); // Atualiza a variável
    }
  }

  // Adiciona o caractere nulo ao final da string
  str[j] = '\0';
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

  // Chama a função para eliminar espaços em branco repetidos
  eliminarEspacosRepetidos(str);

  // Imprime a string resultante
  printf("String após eliminar espaços em branco repetidos: %s\n", str);

  return 0;
}
