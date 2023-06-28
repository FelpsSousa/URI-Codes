/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Cédulas

#include <iostream>

using namespace std;

int main()
{
  // descrito pelo próprio problema que o valor lido poderia ser (0 < N < 1000000)
  long int valor; 
  // [vetor]: melhor forma de armazenar as informações sem precisar declarar uma variavel para cada
  int notas[7]      = { 100, 50, 20, 10, 5, 2, 1 }; 
  int qtd_notas[7]  = { 0 };

  cin >> valor;

  cout << valor << endl;

  for ( int i = 0; i < 7;  i++ )
  {
    qtd_notas[i] = valor / notas[i];
    // aqui encontra-se o passo principal do problema, pois o perador "%" ele retorna o resto da divisão inteira entre os dois operadores.
    valor %= notas[i];  

    cout << qtd_notas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
  } 

  return 0;
}
