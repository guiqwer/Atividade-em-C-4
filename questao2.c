#include <stdio.h>

int main()
{

  int k[30];
  int i, temp;

  for (i = 0; i < 30; i++)
  {
    // leitura dos valores de k
    printf("Digite um número para k[%d]", i);
    scanf("%d", &k[i]);
  }
  // troca dos elementos
  for (i = 1; i < 30; i += 2)
  {
    temp = k[i];
    k[i] = k[i - 1];
    k[i - 1] = temp;
  }

  // exibição do vetor modificado
  printf("Vetor modificado:\n");
  for (i = 0; i < 30; i++)
  {
    printf("%d ", k[i]);
  }

  return 0;
}
