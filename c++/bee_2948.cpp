/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Plantacao de Acai - AD-HOC.

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct Ponto
{
  double x;
  double y;
};

// Funcao para calcular a distancia entre dois pontos usando a formula da distancia euclidiana: d = sqrt((x2 - x1)^2 + (y2 - y1)^2).
double calculaDistancia(double x1, double y1, double x2, double y2)
{
  double dx = x2 - x1;
  double dy = y2 - y1;

  return sqrt((dx * dx) + (dy * dy));
}

int main()
{
  int N;
  cin >> N;

  double pi = 3.14;

  vector<Ponto> acai(N);

  // Ler as coordenadas dos pes de acai.
  for (int i = 0; i < N; i++)
  {
    cin >> acai[i].x >> acai[i].y;
  }

  // Caalcular o centro da cerca.
  double centroX = 0.0;
  double centroY = 0.0;
  for (int i = 0; i < N; i++)
  {
    centroX += acai[i].x;
    centroY += acai[i].y;
  }
  centroX /= N;
  centroY /= N;

  // Encontrar o pe de acai mais distante da cerca.
  double maxDistancia = 0.0;
  for (int i = 0; i < N; i++)
  {
    double distancia = calculaDistancia(centroX, centroY, acai[i].x, acai[i].y);
    if (distancia > maxDistancia)
    {
      maxDistancia = distancia;
    }
  }

  // Calcular a quantidade em metros de fio eletrificado necessario.
  double perimetro = 2 * pi * maxDistancia;
  double fioEletrificado = 4 * perimetro;

  // Imprimir resultados com 2 casas de precisao.
  cout << fixed << setprecision(2);
  cout << centroX << " " << centroY << " " << maxDistancia << " " << fioEletrificado << endl; 

  return 0;
}
