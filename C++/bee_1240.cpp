/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// ENCAIXA OU NAO I - MATEMATICA - NIVEL 2 | +2.6 PONTOS.

#include <iostream>
#include <string>

using namespace std;

// Funcao para verificar se B encaixa em A.
bool encaixa(int A, int B)
{
  string stringA = to_string(A);
  string stringB = to_string(B);

  if (stringB.length() > stringA.length())
  {
    return false;
  }

  int diferenca = stringA.length() - stringB.length();

  for (int i = 0; i < stringB.length(); i++)
  {
    if (stringA[diferenca + i] != stringB[i])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int N;
  cin >> N;

  for(int i = 0; i < N; i++)
  {
    int A, B;
    cin >> A >> B;

    if(encaixa(A, B))
    {
      cout << "encaixa" << endl;
    }
    else
    {
      cout << "nao encaixa" << endl;
    }
  }

  return 0;
}
