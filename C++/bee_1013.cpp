/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Eh o Maior

#include <iostream>

using namespace std;

int main()
{
  int a, b, c, maior = 0, aux = 0;

  cin >> a;
  cin >> b;
  cin >> c;

  maior = (( a + b + abs( a - b ) ) / 2 ); // abs - retorna o valor absoluto, positivo do número de entrada.

  aux = maior;

  maior = (( aux + c + abs( aux - c )) / 2 );

  cout << maior << " eh o maior" << endl;
  
  return 0;
}
