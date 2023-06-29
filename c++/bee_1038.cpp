/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikoTeko: @thefelps.code
*   YT: @thefelpscode
*/

// Lanche

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int codigo, quantidade;
  double valor = 0.0, total = 0.0;

  cin >> codigo >> quantidade;

  switch (codigo)
  {
  case 1:
    valor = 4.00;
    break;
  case 2:
    valor = 4.50;
    break;
  case 3:
    valor = 5.00;
    break;
  case 4:
    valor = 2.00;
    break;
  case 5:
    valor = 1.50;
  /*default:
    cout << "Entrada Invalida!";
    break;*/
  }

  total = ( valor * quantidade );

  cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

  return 0;
}
