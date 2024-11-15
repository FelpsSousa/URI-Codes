/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Areas Geometricas

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double A, B, C, area_triang_ret, area_circ, area_trapezio, area_quadr, area_retang;
  double pi = 3.14159;

  cin >> A;
  cin >> B;
  cin >> C;

  area_triang_ret = ( ( A * C ) / 2.0 );
  area_circ       = ( pi * C * C );
  area_trapezio   = ( ( ( A + B ) * C ) / 2);
  area_quadr      = ( B * B );
  area_retang     = ( A * B );

  cout << "TRIANGULO: " << fixed << setprecision(3) << area_triang_ret << endl;
  cout << "CIRCULO: "   << fixed << setprecision(3) << area_circ       << endl;
  cout << "TRAPEZIO: "  << fixed << setprecision(3) << area_trapezio   << endl;
  cout << "QUADRADO: "  << fixed << setprecision(3) << area_quadr      << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << area_retang     << endl;

  return 0;
}