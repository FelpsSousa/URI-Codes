/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// CARTAO - MATEMATICA - NIVEL 2 | +10.7 PONTOS.

#include <iostream>

using namespace std;

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if ((A <= C && B <=D) || (A <= D && B <= C))
  {
    cout << "yes" << endl;
  }
  else
  {
    cout << "no" << endl;
  }

  return 0;
}