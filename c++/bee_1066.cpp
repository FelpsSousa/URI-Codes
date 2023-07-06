/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// PARES, IMPARES, POSITIVOS E NEGATIVOS - INICIANTE - NIVEL 1 | +1.5 PONTOS.

#include <iostream>

using namespace std;

int main()
{
  int numeros[5];
  int pares = 0, impares = 0, positivos = 0, negativos = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> numeros[i];

    if (numeros[i] % 2 == 0)
    {
      pares++;
    }
    else{
      impares++;
    }

    if (numeros[i] > 0)
    {
      positivos++;
    }
    else if (numeros[i] < 0)
    {
      negativos++;
    }
  }

  cout << pares     << " valor(es) par(es)" << endl;
  cout << impares   << " valor(es) impar(es)" << endl; 
  cout << positivos << " valor(es) positivo(s)" << endl;
  cout << negativos << " valor(es) negativo(s)" << endl;

  return 0;
}
