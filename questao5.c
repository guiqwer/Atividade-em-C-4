#include <stdio.h>

// Função para verificar se um número é primo
int Primo(int num)
{
  if (num < 2)
  {
    return 0; // Não é primo
  }
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return 0; // Não é primo
    }
  }
  return 1; // É primo
}

int main()
{
  int vetorK[15];
  int vetorP[15]; // Assumindo que todos os 15 elementos de K são primos

  // Leitura do vetor K
  printf("Digite 15 valores inteiros nao-negativos para o vetor K:\n");
  for (int i = 0; i < 15; i++)
  {
    scanf("%d", &vetorK[i]);
  }

  // Preencher o vetor P com os números primos de K
  int contadorP = 0;
  for (int i = 0; i < 15; i++)
  {
    if (Primo(vetorK[i]))
    {
      vetorP[contadorP] = vetorK[i];
      contadorP++;
    }
  }

  // Exibir o vetor P
  printf("\nVetor P (numeros primos):\n");
  for (int i = 0; i < contadorP; i++)
  {
    printf("%d ", vetorP[i]);
  }

  return 0;
}
