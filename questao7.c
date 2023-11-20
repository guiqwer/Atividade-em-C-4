#include <stdio.h>

void ordenarVetor(int vetor[], int tamanho)
{
  int temp;

  // Bubble Sort
  for (int i = 0; i < tamanho - 1; i++)
  {
    for (int j = 0; j < tamanho - 1 - i; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        // trocar os elementos se estiverem fora de ordem
        temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int N;

  // Solicitar o número de elementos no vetor
  printf("Digite o numero de elementos no vetor (maximo 10): ");
  scanf("%d", &N);

  if (N > 10 || N <= 0)
  {
    printf("Por favor, insira um numero de elementos valido (1 a 10).\n");
    return 1;
  }

  int vetor[N];

  // Ler os elementos do vetor
  printf("Digite os %d elementos do vetor:\n", N);
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &vetor[i]);
  }

  // Chamar a função para ordenar o vetor
  ordenarVetor(vetor, N);

  // Exibir o vetor ordenado
  printf("\nVetor ordenado crescentemente:\n");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", vetor[i]);
  }

  return 0;
}
