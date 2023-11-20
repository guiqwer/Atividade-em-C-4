#include <stdio.h>

// Função para encontrar o segmento de soma máxima
int encontrarSegmentoMaximo(int numeros[], int n)
{
  int maxAtual = numeros[0];  // Inicializa o máximo atual
  int maxGlobal = numeros[0]; // Inicializa o máximo global

  // Loop para percorrer a sequência
  for (int i = 1; i < n; i++)
  {
    // Atualiza o máximo atual para incluir o número atual ou reiniciar se for melhor começar a partir do número atual
    maxAtual = (numeros[i] > maxAtual + numeros[i]) ? numeros[i] : maxAtual + numeros[i];

    // Atualiza o máximo global
    if (maxAtual > maxGlobal)
    {
      maxGlobal = maxAtual;
    }
  }

  return maxGlobal;
}

int main()
{
  int n;

  // Leitura do tamanho da sequência
  printf("Digite o tamanho da sequência: ");
  scanf("%d", &n);

  // Declaração do vetor para armazenar a sequência
  int numeros[n];

  // Leitura da sequência
  printf("Digite a sequência de %d números inteiros:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &numeros[i]);
  }

  // Chama a função para encontrar o segmento de soma máxima
  int resultado = encontrarSegmentoMaximo(numeros, n);

  // Imprime o resultado
  printf("A soma do segmento máximo é: %d\n", resultado);

  return 0;
}
