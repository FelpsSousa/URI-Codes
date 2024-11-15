/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// TEMPO DE JOGO COM MINUTOS - INICIANTE - NIVEL 9.

#include <iostream>

using namespace std;

int main()
{
  int horaInicial, minutoInicial, horaFinal, minutoFinal;
  int duracaoHoras, duracaoMinutos;

  // Leitura dos valores de entrada.
  cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

  // Calculo da duracao do jogo.
  duracaoHoras    = horaFinal - horaInicial;
  duracaoMinutos  = minutoFinal - minutoInicial;

  // Ajuste caso  a diferenca seja negativa.
  if (duracaoMinutos < 0)
  {
    duracaoHoras--;
    duracaoMinutos += 60;
  }

  // Ajuste caso o jogo virou a noite.
  if (duracaoHoras < 0)
  {
    duracaoHoras += 24;
  }

  if (duracaoHoras == 0 && duracaoMinutos == 0)
  {
    duracaoHoras = 24;
  }

  // Impressao do resultado 
  cout << "O JOGO DUROU " << duracaoHoras << " HORA(S) E " << duracaoMinutos << " MINUTO(S)" << endl;

  return 0;
}