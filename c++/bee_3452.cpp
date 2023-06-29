/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikoTeko: @thefelps.code
*   YT: @thefelpscode
*/

// Labirinto em Parafuso

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool resolverLabirinto( const vector<string>& labirinto, const string& noz ) 
{
  int R = labirinto.size();
  int C = labirinto[0].size();
  int N = noz.size();

  // Verifica se a porca esta na cabeça do parafuso.
  if ( labirinto[0] == noz ) 
    return true; 

  // Inicializa a posicao da porca no labirinto.
  int posicaoNoz = N - 1;

  // Inicializa a posicao atual no labirinto.
  int linha  = 0;
  int coluna = 0;

  // Enquanto nao chegarmos na cabeça do parafuso.
  while ( linha < R - 1 ) {
    
    // Move para baixo.
    if ( labirinto[linha + 1][(coluna + posicaoNoz) % C] == '0' ) 
    {
      linha++;
    }
    // Move no sentido horario.
    else if ( labirinto[linha][(coluna + posicaoNoz + 1) % C ] == '0')
    {
      coluna = (coluna + 1) % C;
    }
    // Move no sentido anti-horario.
    else if ( labirinto[linha][(coluna + posicaoNoz - 1 + C ) % C ] == '0')
    {
      coluna = (coluna - 1 + C) % C;
    }
    // Nao eh possivel mover a porca.
    else 
    {
      return false;
    }

    // Verifica se a porca chegou na posicao correta.
    if ( labirinto[linha] == noz )
    {
      return true;
    }

    // Move a porca para a proxima posicao.
    posicaoNoz = (posicaoNoz - 1 + N) % N;
  }

  // Se chegou aqui, significa que nao eh possivel chegar a cabeca do parafuso.
  return false;
}
  
int main()
{
  int R, C;
  cin >> R >> C;

  string noz;
  cin >> noz;

  vector<string> labirinto( R );

  for ( int i = 0; i < R; i++ ) 
  {
    cin >> labirinto[i];
  }

  bool temSolucao = resolverLabirinto( labirinto, noz );

  if ( temSolucao )
  {
    cout << "Y" << endl;
  } 
  else 
  {
    cout << "N" << endl;
  }

  return 0;
}
