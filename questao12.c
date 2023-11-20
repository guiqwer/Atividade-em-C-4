#include <stdio.h>

void somaSequencias(int seq1[], int seq2[], int n)
{
  int soma[n + 1]; // Vetor para armazenar a soma, incluindo espaço extra para possível vai um
  int vaiUm = 0;

  // Realiza a soma dos algarismos das sequências
  for (int i = n - 1; i >= 0; i--)
  {
    int somaDigitos = seq1[i] + seq2[i] + vaiUm;

    soma[i + 1] = somaDigitos % 10; // Armazena o algarismo da soma
    vaiUm = somaDigitos / 10;       // Calcula o vai um para a próxima posição
  }

  // Se houver vai um restante, adiciona ao início do vetor de soma
  soma[0] = vaiUm;

  // Exibe a sequência resultante da soma
  printf("Sequência resultante da soma: ");
  for (int i = 0; i < n + 1; i++)
  {
    printf("%d ", soma[i]);
  }
  printf("\n");
}

int main()
{
  int n;

  // Solicita o valor de n ao usuário
  printf("Digite o valor de n (quantidade de algarismos): ");
  scanf("%d", &n);

  int sequencia1[n];
  int sequencia2[n];

  // Leitura da primeira sequência
  printf("Digite a primeira sequência de %d algarismos:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &sequencia1[i]);
  }

  // Leitura da segunda sequência
  printf("Digite a segunda sequência de %d algarismos:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &sequencia2[i]);
  }

  // Chama a função para calcular a soma das sequências
  somaSequencias(sequencia1, sequencia2, n);

  return 0;
}
