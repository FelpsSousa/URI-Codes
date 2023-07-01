/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// {soma+=i++} até N.

#include <iostream>
#include <cmath>

using namespace std;

// Funcao para contar as maneiras de expressar N como a soma de números inteiros consecutivos.
int countConsecutiveSums(long long N)
{
  int count = 0;
  long long limit = sqrt(N); // Limite maximo para o comprimento da sequencia.

  // Percorre os possiveis comprimentos da sequencia consecutiva.
  for (int length = 1; length <= limit; length++) 
  {
    // Verificar se N pode ser expresso como a soma de uma sequencia de comprimento 'length'.
    long long sum = (length * (length + 1)) / 2; // Soma da sequencia consecutiva.

    // Verifica se o valor restante de N apos subtrair a soma eh divisivel pelo comprimento 'length'.
    if ((N - sum) % length == 0)
    {
      count++; // Incrementa o contador de maneiras.
    }
  }

  return count; // Retorna o numero de maneiras encontradas.
}

int main()
{
  long long N;
  
  // Le os valores de entrada ate encontrar o fim do arquivo (EOF).
  while (cin >> N)
  {
    // Chama a funcao countConsecutiveSums para retornar as maneiras de expresssar N.
    int ways = countConsecutiveSums(N);

    // Imprime o numero de maneiras encontradas.
    cout << ways << endl;
  }

  return 0;
}
