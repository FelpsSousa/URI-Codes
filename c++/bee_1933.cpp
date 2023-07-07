/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// TRI-DU - INICIANTE - NIVEL 1 | +1.1 PONTOS.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int carta1, carta2, carta3;

  cin >> carta1 >> carta2;

  int maiorCarta = max(carta1, carta2);

  if (carta1 == carta2)
  {
    carta3 = carta1;
  }
  else
  {
    carta3 = maiorCarta;
  }

  cout << carta3 << endl;

  return 0;
}
