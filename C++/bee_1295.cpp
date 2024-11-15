/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// PROBLEMA DOS PARES MAIS PROXIMOS - GEOMETRIA COMPUTACIONAL - NIVEL 9 | +9.8 PONTOS.

/*
*  A opcao de reimplementacao sera em utilizar o Algoritmo de Divisao e Conquista
*  para encontrar a distancia minima entre pontos em um plano. Neste algoritmo, o 
*  conjunto de pontos eh dividido em subconjuntos menores e, em seguida, a distancia
*  minima eh encontrada recursivamente em cada subconjunto. Logo, a distancia minima
*  entre os pontos em uma faixa proxima a linha de divisao e calculada para garantir
*  que nenhum par de pontos tenha sido perdido. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

struct Ponto
{
  double x;
  double y;
};

// Funcao para calcular a distancia entre dois pontos.
double distancia(Ponto p1, Ponto p2)
{
  double dx = p1.x - p2.x;
  double dy = p1.y - p2.y;

  return sqrt(dx * dx + dy * dy);
}

// Funcao auxiliar para comparar pontos pela coordenada x.
bool comparaX(Ponto p1, Ponto p2)
{
  return p1.x < p2.x;
}

// Funcao auxiliar para comparar pontos pela coordenada yx
bool comparaY(Ponto p1, Ponto p2)
{
  return p1.y < p2.y;
}

// Funcao recursiva para encontrar a sistancia minima entre pontos.
double minimaDistancia(vector<Ponto>& pontos, int esquerda, int direita)
{
  // Caso base: se houver apenas um ou dois pontos, retorna a distancia entre eles.
  if ( direita - esquerda <= 2)
  {
    double minDist = numeric_limits<double>::max();
    for (int i = esquerda; i < direita; i++)
    {
      for (int j = i + 1; j < direita; j++)
      {
        minDist = min(minDist, distancia(pontos[i], pontos[j]));
      }
    }

    return minDist;
  }

  // Divide o conjunto de pontos em dois subconjuntos.
  int media = (esquerda + direita) /2;
  double mediaX = pontos[media].x;

  // Calcula a distancia minima em cada subconjunto recursivamente.
  double distEsquerda = minimaDistancia(pontos, esquerda, media);
  double distDireita  = minimaDistancia(pontos, direita, media);
  double minDist      = min(distEsquerda, distDireita);

  // Encontra os pontos dentro da faixa p´roxima a linha de divisao
  vector<Ponto> faixa;
  for (int i = esquerda; i < direita; i++)
  {
    if (abs(pontos[i].x - mediaX) < minDist)
    {
      faixa.push_back(pontos[i]);
    }
  }

  // Ordena os pontos da faixa pela coordenada y.
  sort(faixa.begin(), faixa.end(), comparaY);

  // Verifica se ha algum par de pontos mais proximos dentro da faixa.
  int tamanhoFaixa = faixa.size();
  for (int i = 0; i < tamanhoFaixa; i++)
  {
    for(int j = i + 1; j < tamanhoFaixa && (faixa[j].y - faixa[i].y) < minDist; j++)
    {
      minDist = min(minDist, distancia(faixa[i], faixa[j]));
    }
  }

  return minDist;
}

int main()
{
  int n;
  while (cin >> n && n != 0)
  {
    vector<Ponto> pontos(n);
    for (int i = 0; i < n; i++)
    {
      cin >> pontos[i].x >> pontos[i].y;
    }

    // Ordena os pontos pelo eixo x antes de calcular a sistancia minima.
    sort(pontos.begin(), pontos.end(), comparaX);

    // Calcula e imprime a distancia minima entre os pontos mais proximos.
    double minima = minimaDistancia(pontos, 0, n);
    if (minima < 10000)
    {
      cout << fixed << setprecision(4) << minima << endl;
    }
    else
    {
      cout << "INFINITY" << endl;
    }
  }

  return 0;
}
