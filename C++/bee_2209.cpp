/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// INFILTRATION - AD-HOC - NIVEL 5.

#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

// Funcao para verificar se um conjunto de celulas oferece controle completo.
bool possuiControleCompleto(const vector<bitset<75>>& matriz, const bitset<75>& infiltradas)
{
  for (int i = 0; i < matriz.size(); i++)
  {
    if ((infiltradas & matriz[i]) != infiltradas)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int t;
  cin >> t;

  for(int casoNum = 1; casoNum <= t; casoNum++)
  {
    int n;
    cin >> n;

    vector<bitset<75>> matriz(n);
    for (int i = 0; i < n; i++)
    {
      string linha;
      cin >> linha;
      matriz[i] = bitset<75>(linha);
    }

    int minInfiltradas = n; // Comeca com o numero maximo de celulas infiltradas.
    bitset<75> infiltradas;

    // Gera todos os possiveis subconjuntos de celulas para infiltrar.
    for (int i = 1; i < (1 << n); i++)
    {
      bitset<75> subconjunto(i);

      // Verifica se o subconjunto oferece controle completo
      if (possuiControleCompleto(matriz, subconjunto))
      {
        // Verifica se requer menos celulas infiltradas.
        if (subconjunto.count() < minInfiltradas)
        {
          infiltradas = subconjunto;
          minInfiltradas = subconjunto.count();
        }
      }
    }

    // Imprime a saida.
    cout << "Case " << casoNum << ": " << minInfiltradas;
    for (int i = 0; i < n; i++)
    {
      if (infiltradas[i])
      {
        cout << " " << i + 1;
      }
    }

    cout << endl;
  }

  return 0;
}
