#include <stdio.h>

int main()
{
  int vetorA[10];
  int vetorB[10];
  int vetorC[10];
  int i;

  // Leitura dos elementos do vetor A
  printf("Digite 10 números inteiros para o vetor A:\n");
  for (i = 0; i < 10; i++)
  {
    printf("Posição %d: ", i + 1);
    scanf("%d", &vetorA[i]);
  }

  // Leitura dos elementos do vetor B
  printf("Digite 10 números inteiros para o vetor B:\n");
  for (i = 0; i < 10; i++)
  {
    printf("Posição %d: ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  // Subtração dos elementos de A pelos elementos correspondentes de B em C
  for (i = 0; i < 10; i++)
  {
    vetorC[i] = vetorA[i] - vetorB[9 - i];
  }

  // Impressão do vetor C
  printf("Vetor C resultante:\n");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", vetorC[i]);
  }
  printf("\n");

  return 0;
}
