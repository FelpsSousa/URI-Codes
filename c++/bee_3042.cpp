/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// DESVIANDO DE ARVORES DE NATAL - INICIANTE - NIVEL 7.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int M;

  while (cin >> M && M != 0)
  {
    vector<int> dp(M + 1); // Vetor para armazenar o numero minimo de toques.
    dp[0] = 0; // Vetor abrviado de'Dynamic Programming'. Vetore auxiliar para armazenar o valor intermediario durante o algoritmo.

    for (int i = 1; i <= M; i++)
    {
      int left, center, right;
      cin >> left >> center >> right;

      // Inicialmente, assume-se o mesmo numero de toques do caso anterior.
      dp[i] = dp[i - 1];

      // Verifica 
      if(i - 2 >= 0)
      {
        dp[i] = min(dp[i], dp[i - 2] + abs(center - 1));
      }

      cout << "->" << dp[i] << endl; 

      // Verifica a pista da esquerda (LEFT: L).
      if (i - 3 >= 0)
      {
        dp[i] = min(dp[i], dp[i - 3] + abs(right - 2));
      }

      cout << "->" << dp[i] << endl;
    }

    cout << dp[M] << endl; 
  }

  return 0;
}