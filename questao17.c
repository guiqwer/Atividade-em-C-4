#include <stdio.h>
#include <ctype.h>

// Função para converter a primeira letra de cada palavra para maiúscula
void converterParaMaiuscula(char str[])
{
  // Iniciar com a primeira letra em maiúscula
  if (str[0] != '\0')
  {
    str[0] = toupper(str[0]);
  }

  // Iterar sobre os caracteres da string
  for (int i = 1; str[i] != '\0'; i++)
  {
    // Se o caractere anterior for um espaço em branco, converter o caractere atual para maiúscula
    if (str[i - 1] == ' ' || str[i - 1] == '\n')
    {
      str[i] = toupper(str[i]);
    }
  }
}

int main()
{
  char frase[1000];

  // Solicitar ao usuário que digite uma frase
  printf("Digite uma frase:\n");
  fgets(frase, sizeof(frase), stdin);

  // Chamar a função para converter a primeira letra de cada palavra para maiúscula
  converterParaMaiuscula(frase);

  // Imprimir a frase modificada
  printf("Frase modificada: %s\n", frase);

  return 0;
}
