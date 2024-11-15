/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// DESVIANDO DE ARVORES DE NATAL - INICIANTE - NIVEL 7.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int M;
  
  while (cin >> M && M != 0)
  {
    vector<vector<int>> pistas(M, vector<int>(3));

    // Leitura das pistas.
    for (int i = 0; i < M; i++)
    {
      cin >> pistas[i][0] >> pistas[i][1] >> pistas[i][2];
    }

    int toques = 0;
    int pistaAtual = 1; // Começando sempre no centro.

    for (int i = 0; i < M; i++)
    {
      // Verifica se há obstáculo na pista atual.
      if (pistas[i][pistaAtual] == 1)
      {
        cout << " entrou no atual " << endl;
        // Encontra uma pista livre pra desviar do obstaculo.
        if (pistas[i][0] == 0)
        {
          pistaAtual = 0; // Desvia para a pista da esquerda.
          toques++;
        }
        else if (pistas[i][2] == 0)
        {
          pistaAtual = 2; // Desvia para a pista da direita.
          toques++;
        }
        else (pistas[i][1] == 0)
        {
          pistaAtual = 1; // Desvia para a pista da direita.
          toques++;
        }
      }
    }

    cout << toques << endl;
  }
 
  return 0;
}
