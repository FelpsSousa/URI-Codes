/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// AREA INFERIOR - INICIANTE - NIVEL 1 | +1.5 PONTOS.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char O;
  cin >> O;

  double matriz[12][12];
  double soma = 0, media = 0, count = 0; 

  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      cin >> matriz[i][j]; // Lendo cada um dos elementos da matriz;

      if (j >= 7 && (i + j >= 12) && (j - i >= 1))
      {
        soma += matriz[i][j];
        count++;
        cout << "matriz: " << i << "," << j << endl;  
      }
    }
  }
  //cout << "count: " << count << endl;
  if (O == 'S')
  {
    cout << fixed << setprecision(1) << soma << endl;
  }
  else if (O == 'M')
  {
    media = soma / count;
    cout << fixed << setprecision(1) << media << endl; 
  }

  return 0;
}