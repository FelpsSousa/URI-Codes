/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Consumo - km/L

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int dist;
  double gas, consumo;

  cin >> dist;
  cin >> gas;

  consumo = ( dist / gas );

  cout << fixed << setprecision(3) << consumo << " km/l" << endl;

  return 0;
}