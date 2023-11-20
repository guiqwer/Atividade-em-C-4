#include <stdio.h>
#include <limits.h>

int main()
{

  int n[20];
  int i, menor, maior;
  int posicaoMenor, posicaoMaior;

  menor = INT_MAX;
  maior = INT_MIN;

  for (i = 0; i < 20; i++)
  {
    printf("Digite um número para N[%d]: ", i);
    scanf("%d", &n[i]);

    if (n[i] < menor)
    {
      menor = n[i];
      posicaoMenor = i;
    }

    if (n[i] > maior)
    {
      maior = n[i];
      posicaoMaior = i;
    }
  }

  printf("Valores inseridos no array:\n");
  for (i = 0; i < 20; i++)
  {
    printf("%d\n", n[i]);
  }

  printf("Menor número: %d (Posição: %d)\n", menor, posicaoMenor);
  printf("Maior número: %d (Posição: %d)\n", maior, posicaoMaior);

  return 0;
}
