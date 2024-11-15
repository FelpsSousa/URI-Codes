/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// BALAO++ - GEOMETRIA COMPUTACIONAL - NIVEL 2 | +2.5 PONTOS.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double pi = 3.1415;
  double R, L;

  cin >> R >> L;

  double volumeBalao = (4/3) * (pi * pow(R, 3));

  int baloes = L / volumeBalao;

  cout << baloes << endl;

  return 0;
}
