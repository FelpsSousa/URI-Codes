/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// FIGURINHAS - MATEMATICA - NIVEL 3 | +3.2 PONTOS.

#include <iostream>

using namespace std;

// Funcao para calcular o maximo divisor comum (MDC) entre os dois numeros.
int mdc(int a, int b)
{
  // Algoritmo de Euclides.
  if (b == 0)
  {
    return a;
  }

  return mdc(b, a % b); 
}

int main()
{
  int N, qtdFigurinhas1, qtdFigurinhas2;
  cin >> N;

  while (N--)
  {
    cin >> qtdFigurinhas1 >> qtdFigurinhas2;

    // Calcula o tamnho maximo da pilha de figurinhas que podem ser trocadas.
    int tamanhoMaximoPilha = mdc(qtdFigurinhas1, qtdFigurinhas2);

    cout << tamanhoMaximoPilha << endl;
  }

  return 0;
}
