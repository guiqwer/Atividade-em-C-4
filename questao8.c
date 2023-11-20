#include <stdio.h>
#include <math.h>

int main()
{
  int A[20];

  // Ler os elementos do vetor A
  printf("Digite os 20 elementos do vetor A:\n");
  for (int i = 0; i < 20; i++)
  {
    scanf("%d", &A[i]);
  }

  // Calcular o valor de S
  int S = 0;
  for (int i = 0; i < 10; i++)
  {
    S += pow(A[i] - A[19 - i], 2);
  }

  // Imprimir o valor de S
  printf("O valor de S e: %d\n", S);

  return 0;
}
