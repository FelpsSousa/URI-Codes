/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

//  RESTO 2.0 - MATEMATICA - NIVEL 10 | +10.5 PONTOS.

/*
*   Neste codigo, o numero A eh lido como uma string e o B eh lido como um inteiro.
*   Em seguida, eh realizado um loop pela string A para calcular o resto da divisao.
*   A cada iteracao, o digito atual eh convertido em um numero inteiro subtraindo o valor ASCII de '0',
*   e eh adicionado ao valor acumulado do resto. Em cada iteracao, o resto eh atualizado utilizando o 
*   operador de modulo '%'. Finalizando com a impressao da saida.
*/

#include <iostream>

using namespace std;

int main()
{
  string A;
  int B;

  cin >> A >> B;

  int resto = 0;

  for (char c : A)
  {
    resto = (resto * 10 + (c - '0')) % B;
  }

  cout << resto << endl;

  return 0;
}