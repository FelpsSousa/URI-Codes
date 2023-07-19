/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

//  MULTIPLOS - INICIANTE - NIVEL 2 | +2.7 PONTOS.

#include <iostream>

using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  if (A != 0 && B != 0)
  {
    if (A % B == 0 || B % A == 0)
    {
      cout << "Sao Multiplos" << endl;
    }
    else
    {
      cout << "Nao sao Multiplos" << endl;
    }
  }
  else
  {
    cout << "Nao sao Multiplos" << endl;
  }
  
  return 0;
}
