/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

//  DESAFIO DE BINO - INICIANTE - NIVEL 1 | +1.4 PONTOS.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> lista(N);

  for (int i = 0; i < N; i++)
  {
    cin >> lista[i];
  }

  int mult2 = 0;
  int mult3 = 0;
  int mult4 = 0;
  int mult5 = 0;

  for (int i = 0; i < N; i++)
  {
    if (lista[i] % 2 == 0)
    {
      mult2++;
    }
    if (lista[i] % 3 == 0)
    {
      mult3++;
    }
    if (lista[i] % 4 == 0)
    {
      mult4++;
    }
    if (lista[i] % 5 == 0)
    {
      mult5++;
    }
  }

  cout << mult2 << " Multiplo(s) de 2" << endl;
  cout << mult3 << " Multiplo(s) de 3" << endl;
  cout << mult4 << " Multiplo(s) de 4" << endl;
  cout << mult5 << " Multiplo(s) de 5" << endl;

  return 0;
}
