/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

//  DIVIDINDO X POR Y - INICIANTE - NIVEL 1 | +1.8 PONTOS.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int X, Y;
    cin >> X >> Y;

    if (Y != 0)
    {
      double divisao = X / (Y * 1.0);

      cout << fixed << setprecision(1) << divisao << endl;
    }
    else
    {
      cout << "divisao impossivel" << endl;
    }
  }

  return 0;
}
