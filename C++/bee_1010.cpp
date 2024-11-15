/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int code_1, amount_1, code_2, amount_2;
  double value_1, value_2, total_1, total_2, total_payable;

  cin >> code_1;
  cin >> amount_1;
  cin >> value_1;

  cin >> code_2;
  cin >> amount_2; 
  cin >> value_2;

  total_1 = amount_1 * value_1;
  total_2 = amount_2 * value_2;

  total_payable = total_1 + total_2;

  cout << "VALOR A PAGAR: R$ ";
  cout << fixed << setprecision(2);
  cout << total_payable << endl ;

  return 0;
}
