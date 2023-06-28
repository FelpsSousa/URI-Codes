/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Idade em Dias

#include <iostream>

using namespace std;

int main()
{
  int idadeDias, anos, meses, dias;

  cin >> idadeDias;

  anos    = ( idadeDias / 365 );
  meses   = ( ( idadeDias % 365 ) / 30 );
  dias    = ( ( idadeDias % 365 ) % 30 ); 

  cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

  return 0;
}
