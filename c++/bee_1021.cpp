/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Notas e Moedas

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double valor;

  cin >> valor;

  int     notas[6]  = { 100, 50, 20, 10, 5, 2 };
  double  moedas[6] = { 1.0, 0.5, 0.25, 0.10, 0.05, 0.01 };

  cout << "NOTAS:" << endl;

  for ( int i=0; i<6; i++ )
  {
    int quantidadeNotas = ( valor / notas[i] );
    valor -= ( quantidadeNotas * notas[i] );
    cout << quantidadeNotas << " nota(s) de R$ " << notas[i] << ".00" << endl;
  }

  cout << "MOEDAS:" << endl;

  for ( int i=0; i<6; i++ )
  {
    int quantidadeMoedas = ( valor / moedas[i] );
    valor -= ( quantidadeMoedas * moedas[i] );
    cout << quantidadeMoedas << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
  }

  return 0;
}