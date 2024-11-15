/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// MEDIAS PONDERADAS - INICIANTE - NIVEL 1 | +1.6 PONTOS.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
  int N;
  cin >> N;

  double nota1, nota2, nota3;
  double mediaPonderada;

  for (int i = 0; i < N; i++)
  {
    cin >> nota1 >> nota2 >> nota3;

    mediaPonderada = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    cout << fixed << setprecision(1) << mediaPonderada << endl;
  }

  return 0;
}