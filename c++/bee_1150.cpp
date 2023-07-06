/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// ULTRAPASSANDO Z - INICIANTE - NIVEL 1 | +1.7 PONTOS.

#include <iostream>

using namespace std;

int main()
{
  int X = 0, Z = 0, soma = 0, contagem = 0;

  cin >> X;

  while (Z <= X)
  {
    cin >> Z;  
  }

  contagem = X;
  soma = contagem;
  int count = 1;

  while (soma <= Z)
  {
    contagem += 1;
    soma += contagem;
    count++;
    //cout << "soma: " << soma << " count: " << count << endl;
  }

  cout << count << endl;
  
  return 0;
}