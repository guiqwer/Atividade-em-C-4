#include <stdio.h>

int main()
{
  int vetor[15];
  int maior, menor, posMaior, posMenor;

  // Leitura dos elementos do vetor
  printf("Digite os 15 elementos do vetor:\n");
  for (int i = 0; i < 15; i++)
  {
    scanf("%d", &vetor[i]);
  }

  // Inicialização dos valores de maior e menor com o primeiro elemento do vetor
  maior = vetor[0];
  menor = vetor[0];
  posMaior = 0;
  posMenor = 0;

  // Encontrar o maior e o menor elemento e suas posições
  for (int i = 1; i < 15; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
      posMaior = i;
    }
    else if (vetor[i] < menor)
    {
      menor = vetor[i];
      posMenor = i;
    }
  }

  // Exibir resultados
  printf("O maior elemento do vetor é %d e se encontra na posicao %d.\n", maior, posMaior + 1);
  printf("O menor elemento do vetor é %d e se encontra na posicao %d.\n", menor, posMenor + 1);

  return 0;
}
