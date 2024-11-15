/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikoTeko: @thefelps.code
*   YT: @thefelpscode
*/

// Impressao Preguicosa

#include <iostream>
#include <string>
#include <algorithm> // Para utilizar a funcao 'min'.

using namespace std;

int main()
{
  string T;
  int D;

  // Lendo as entradas.
  cin >> T >> D;

  int length = T.length();
  int minimoInstrucoes = length;

  // Verifica se eh possivel imprimir a string T em uma unica instrucao.
  if ( D >= length )
  {
    cout << "1" << endl;
    return 0;
  }

  // Procura o maior divisor de length que seja maior ou igual a D.
  for ( int i = 1; i * i <= length; i++ )
  {
    if ( length % i == 0 )
    {
      int div1 = i;
      int div2 = length / i;

      // Verifica se o divisor eh maior ou igual a D e atualiza o numero minimo de instrucoes.
      if ( div1 >= D )
        minimoInstrucoes = min( minimoInstrucoes, div1 );

      if ( div2 >= D )
        minimoInstrucoes = min( minimoInstrucoes, div2 );

    }
  }

  cout << minimoInstrucoes << endl;

  return 0;
}
