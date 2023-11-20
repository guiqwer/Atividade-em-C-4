#include <stdio.h>

// Função para contar as ocorrências dos números na sequência
void contarOcorrencias(float sequencia[], int n)
{
  // Arrays para armazenar os números e suas respectivas contagens
  float numeros[n];
  int contagens[n];
  int totalNumeros = 0;

  // Inicializa as contagens para zero
  for (int i = 0; i < n; i++)
  {
    contagens[i] = 0;
  }

  // Loop para percorrer a sequência
  for (int i = 0; i < n; i++)
  {
    // Verifica se o número já foi encontrado
    int encontrado = 0;
    for (int j = 0; j < totalNumeros; j++)
    {
      if (sequencia[i] == numeros[j])
      {
        encontrado = 1;
        contagens[j]++;
        break;
      }
    }

    // Se o número não foi encontrado, adiciona à lista
    if (!encontrado)
    {
      numeros[totalNumeros] = sequencia[i];
      contagens[totalNumeros] = 1;
      totalNumeros++;
    }
  }

  // Imprime as contagens
  for (int i = 0; i < totalNumeros; i++)
  { printf("%.1f ocorre %d vezes\n", numeros[i], contagens[i]);
  }
}

int main()
{
  int n;

  // Leitura do tamanho da sequência
  printf("Digite o tamanho da sequência: ");
  scanf("%d", &n);

  // Declaração do vetor para armazenar a sequência
  float sequencia[n];

  // Leitura da sequência
  printf("Digite a sequência de %d números reais:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &sequencia[i]);
  }

  // Chama a função para contar as ocorrências e imprimir o resultado
  contarOcorrencias(sequencia, n);

  return 0;
}
