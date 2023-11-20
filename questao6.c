#include <stdio.h>

// 1- Função para imprimir os valores de um vetor
void imprimirVetor(int vetor[], int tamanho)
{
  printf("Valores inseridos na array: \n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

// 2-  Função para imprimir os valores de um vetor ao inverso
void imprimirVetorInverso(int vetor[], int tamanho)
{
  printf("Valores inseridos na array ao inverso: \n");
  for (int i = tamanho - 1; i >= 0; i--)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

// 3- Função para ordenar o vetor
void sort(int vetor[], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

// 3- Função para calcular a mediana
double mediana(int vetor[], int n)
{
  int i, meio;
  double mediana;

  // Ordenar o vetor
  sort(vetor, n);

  // Encontrar o valor do elemento do meio
  meio = n / 2;

  // Se o número de elementos é par, calcular a média dos dois elementos do meio
  if (n % 2 == 0)
  {
    mediana = (double)(vetor[meio - 1] + vetor[meio]) / 2;
  }
  // Se o número de elementos é ímpar, a mediana é o elemento do meio
  else
  {
    mediana = (double)vetor[meio];
  }

  return mediana;

  printf("A mediana é: %.2f\n");
}

// 4- Função para multiplicar todos os elementos do vetor
long long multiplicar_vetor(int vetor[50])
{
  long long produto = 1;
  for (int i = 0; i < 50; i++)
  {
    produto *= vetor[i];
  }
  return produto;

  printf("A multiplicação do vetor é: %lld");
}

// 5- Função para calcular a porcentagem dos números positivos
double porcentagempositivo(int vetor[], int n)
{
  int i, count = 0;
  double porcentagem;

  // Percorrer o vetor
  for (i = 0; i < n; i++)
  {
    // Verificar se o número é par e positivo
    if (vetor[i] % 2 == 0 && vetor[i] > 0)
    {
      count++;
    }
  }

  // Calcular a porcentagem
  porcentagem = (double)count / n * 100;

  return porcentagem;

  printf("Porcentagem de números pares positivos: %.2f%%\n");
}

// 6- Função para apresentar números ímpares e calcular a soma
void numerosImparesESoma(int vetor[], int tamanho)
{
  int i, soma = 0;

  printf("Números ímpares:\n");
  for (i = 0; i < tamanho; i++)
  {
    if (vetor[i] % 2 != 0)
    {
      printf("%d ", vetor[i]);
      soma += vetor[i];
    }
  }

  printf("\nSoma dos números ímpares: %d\n", soma);
}

// 7- Função para verificar e imprimir números repetidos em um vetor
void verificarNumerosRepetidos(int vetor[], int tamanho)
{
  int temRepetidos = 0; // Flag para indicar se há números repetidos

  printf("Números repetidos:\n");

  // Percorre o vetor
  for (int i = 0; i < tamanho - 1; i++)
  {
    for (int j = i + 1; j < tamanho; j++)
    {
      // Se encontrar números iguais, imprime e marca que tem repetidos
      if (vetor[i] == vetor[j])
      {
        printf("%d ", vetor[i]);
        temRepetidos = 1;
      }
    }
  }

  // Se não houver repetidos, imprime mensagem indicando isso
  if (!temRepetidos)
  {
    printf("Não há números repetidos.\n");
  }
  else
  {
    printf("\n");
  }
}

int main()

{
  int n;
  int vetor[50];
  int i;

  // Fazer a leitura do número inteiro N

  printf("Digite um número inteiro de 1 até 7:");
  scanf("%d", &n);

  // verificar se o número é 0 logo antes de fazer a leitura do vetor

  if (n == 0)
  {
    printf("Programa encerrado.\n");
    return 0;
  }

  // leitura do vetor

  for (i = 0; i < 50; i++)
  {
    printf("Digite o número na posição %d do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  switch (n)
  {
  case 1:
    imprimirVetor(vetor, 50);
    break;

  case 2:
    imprimirVetorInverso(vetor, 50);
    break;

  case 3:
    sort(vetor, 50);
    mediana(vetor, 50);
    break;

  case 4:
    multiplicar_vetor(vetor);
    break;

  case 5:
    porcentagempositivo(vetor, 50);
    break;

  case 6:
    numerosImparesESoma(vetor, 50);
    break;
  case 7:

    break;

  default:
    printf("Por favor, digite um valor válido.");
    break;
  }
}