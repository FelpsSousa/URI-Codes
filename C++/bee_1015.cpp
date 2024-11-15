/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Distância Entre Dois Pontos

#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
  double x1, x2, y1, y2, dist;

  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  dist = sqrt( ( pow( ( x2 - x1 ), 2 ) ) + ( pow( ( y2 - y1 ), 2 ) ) );

  cout << fixed << setprecision(4) << dist << endl;

  return 0;
}