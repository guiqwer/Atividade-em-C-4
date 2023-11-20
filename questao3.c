#include <stdio.h>

int main()
{

  int n[20];
  int i, temp;

  for (i = 0; i < 20; i++)
  {
    printf("Digite um número para N[%d]", i);
    scanf("%d", &n[i]);
  }

  printf("Valores inseridos no array:\n");
  for (i = 0; i < 20; i++)
  {
    printf("%d\n", n[i]);
  }

  // Troca dos elementos
  for (i = 0; i < 10; i++)
  {
    temp = n[i];
    n[i] = n[19 - i];
    n[19 - i] = temp;
  }

  // Exibição do vetor após a troca
  printf("\n\nVetor após a troca:\n");
  for (i = 0; i < 20; i++)
  {
    printf("%d ", n[i]);
  }

  return 0;
}
