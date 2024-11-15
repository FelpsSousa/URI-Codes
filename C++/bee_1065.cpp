/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Pares Entre Cinco Numeros

#include <iostream>

using namespace std;

int main()
{
  int numbers[5];
  int count = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];

    if (numbers[i] % 2 == 0)
    {
      count++;
    }
  }

  cout << count << " valores pares" << endl;

  return 0;
}
