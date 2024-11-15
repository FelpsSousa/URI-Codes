/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Gasto de Combustível

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int horas, velocidade_med, dist;
  double litros, km_litro = 12.0;

  cin >> horas;
  cin >> velocidade_med;

  dist = ( velocidade_med * horas );

  litros = ( dist / km_litro );

  cout << fixed << setprecision(3) << litros << endl;  

  return 0;
}
