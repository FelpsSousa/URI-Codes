/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// ANTENAS - PARADIGMAS - NIVEL 10.

#include <iostream>
#include <vector>

using namespace std;

#include <iostream>

using namespace std;

int main() 
{
  int N;

  while (cin >> N && N != 0)
  {
    int tamanhoAntenas = 0;

    for (int i = 0; i < N; i++)
    {
        int tamanho;
        cin >> tamanho;
        tamanhoAntenas += tamanho;
    }

    cout << tamanhoAntenas / 2 << endl;
  }

  return 0;
}
