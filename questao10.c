#include <stdio.h>

int main()
{
  int vetor[15];
  int i, maior;

  // Leitura dos elementos do vetor
  printf("Digite 15 números inteiros:\n");
  for (i = 0; i < 15; i++)
  {
    printf("Posição %d: ", i + 1);
    scanf("%d", &vetor[i]);

    // Inicializar a variável 'maior' na primeira iteração
    if (i == 0 || vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }

  // Multiplicar todos os elementos pelo maior valor
  for (i = 0; i < 15; i++)
  {
    vetor[i] *= maior;
  }

  // Exibir o vetor após os cálculos
  printf("Vetor após multiplicação pelo maior valor (%d):\n", maior);
  for (i = 0; i < 15; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  
  return 0;
}
