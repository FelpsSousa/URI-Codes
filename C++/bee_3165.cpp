/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// PRIMOS GEMEOS - MATEMATICA - NIVEL 1 | +5.0 PONTOS.

#include <iostream>
#include <cmath>

using namespace std;

// Funcao para verificar se um nomero eh primo.
bool ehPrimo(int num)
{
  if (num < 2)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }

  return true;
}

// Funcao para encontrar os numeros primos gemeos mais proximos menores ou iguais a N.
void encontraGemeosPrimos(int N)
{
  int gemeoPrimo1 = 0;
  int gemeoPrimo2 = 0;

  for (int i = N; i >= 5; i--)
  {
    if (ehPrimo(i) && ehPrimo(i - 2))
    {
      gemeoPrimo1 = i - 2;
      gemeoPrimo2 = i;
      break;
    }
  }

  cout << gemeoPrimo1 << " " << gemeoPrimo2 << endl;
}

int main()
{
  int N;
  cin >> N;

  encontraGemeosPrimos(N);

  return 0;
}
