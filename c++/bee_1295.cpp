/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// PROBLEMA DOS PARES MAIS PROXIMOS - GEOMETRIA COMPUTACIONAL - NIVEL 9 | +9.8 PONTOS.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

// Funcao para calcular a distancia entre dois pontos (x1, y1) e (x2, y2).
double calculaDistancia(double x1, double y1, double x2, double y2)
{
  double dx = x2 - x1;
  double dy = y2 - y1;

  return sqrt(dx * dx + dy * dy);
}

int main()
{
  int N;
  
  while (cin >> N && N != 0)
  {
    double pontos[N][2]; // Matriz para armazenar as coordenadas dos pontos.

    // Ler as coordenadas dos N pontos.
    for (int i = 0; i < N; i++)
    {
      cin >> pontos[i][0] >> pontos[i][1];
    }

    double distanciaMinima = numeric_limits<double>::max(); // Inicializa distancia minima com um valor muito grande.

    for (int i = 0; i < N; i++)
    {
      for (int j = i + 1; j < N; j++) // Lembrando de nao calcular a distancia replicada do ponto inicial.
      {
        double distancia = calculaDistancia(pontos[i][0], pontos[i][1], pontos[j][0], pontos[j][1]);

        if (distancia < distanciaMinima)
        {
          distanciaMinima = distancia;
        }
      }
    }

    // Verificar se a distancia minima eh menor que 1000 e impimir o resultado.
    if (distanciaMinima < 10000)
    {
      cout << fixed << setprecision(4) << distanciaMinima << endl;
    }
    else
    {
      cout << "INFINITY" << endl;
    }
  }
  
  return 0;
}