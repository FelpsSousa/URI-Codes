/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// A LENDA DE FLAVIUS JOSEPHUS - AC-HOC - NIVEL 4 | +4.8 PONTOS.

#include <iostream>

using namespace std;

// Funcao para calcular o ultimo sobrevivente.
int josephus(int qtdPessoas, int salto) 
{
  // Caso base. Se tivermos apenas umapessoa, ela sera a ultima sobrevivente.
  if (qtdPessoas == 1)
  {
    return 1;
  }

  /* Chamada recursiva para encontrar o sobrevivente no circulo de tamanho n-1.
     A formula utilizada eh baseada na propriedade matematica e que o sobrevivente
     no circulo de tamanho n (qtdPessoas) eh o mesmo sobrevivente no circulo de tamanho n-1,
     mas com um deslocamento de k (salto) posicoes.
  */
  return (josephus(qtdPessoas - 1, salto) + salto - 1) % qtdPessoas + 1;
}

int main()
{
  int NC;
  cin >> NC;

  for (int i = 1; i <= NC; i++)
  {
    int qtdPessoas, salto;
    cin >> qtdPessoas >> salto;

    int ultimoSobrevivente = josephus(qtdPessoas, salto);

    cout << "Case " << i << ": " << ultimoSobrevivente << endl;
  }

  return 0;
}
