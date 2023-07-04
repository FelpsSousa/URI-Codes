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
    vector<int> dp(M + 1, INT_MAX); // Vetor para armazenar o numero minimo de toques.
    dp[0] = 0;

    for (int i = 1; i <= M; i++)
    {
      int L, C, R;
      cin >> L >> C >> R;

      // Verifica a pista do meio (CENTER: C).
      if(C == 0)
      {
        dp[i] = min(dp[i], dp[i - 1]);
      }

      cout << "->" << dp[i] << endl; 

      // Verifica a pista da esquerda (LEFT: L).
      if (L == 0)
      {
        dp[i] = min(dp[i], dp[i - 1] + 1);
      }

      cout << "->" << dp[i] << endl;

      // Verifica a pista da direita (RIGTH: R).
      if (R == 0)
      {
        dp[i] = min(dp[i], dp[i - 1] + 1);
      }

      cout << "->" << dp[i] << endl;
    }

    cout << dp[M] << endl; 
  }

  return 0;
}