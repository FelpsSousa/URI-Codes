/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// FLORES DE FOGO - GEOMETRIA COMPUTACIONAL - NIVEL 5 | +5.3 PONTOS.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int R1, X1, Y1, R2, X2, Y2;

  // Loop principal para processar as intancias.
  while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2)
  {
    // Calculo da distancia entre centros dos circulos usando a formula da distancia entre dois pontos.
    double distancia = sqrt(pow(X1 - X2, 2) + pow(Y2 - Y1, 2));

    // Verificacao da condicao do cacador.
    if (R1 >= distancia + R2)
    {
      // Caso o cacador fique dentro do circulo.
      cout << "RICO" << endl;
    }
    else
    {
      // Caso o cacador fique fora do circulo;
      cout << "MORTO" << endl;
    }
  }

  return 0;
}
