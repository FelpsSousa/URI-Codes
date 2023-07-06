/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// RESPOSTA CERTA - INICIANTE - NIVEL 1.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> resposta(N);

  for (int i = 0; i < N; i++)
  {
    int count = 1 + i;
    
    cin >> resposta[i];

    cout << "resposta " << count << ": " << resposta[i] << endl;;

  }

  return 0; 
}
