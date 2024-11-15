/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

/* 
* MARATONA CTS 2015.
* Perdido em Marte.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int length;
  string letter, word = "";

  cin >> length;

  for (int i = 0; i < length; i++)
  {
    cin >> letter;

    // Converte a string hezadecimal para um valor inteiro.
    int intValue = stoi(letter, nullptr, 16); 

    // Converte o valor inteiro para um caractere.
    char charValue = static_cast<char>(intValue);

    word += charValue; 
  }

  cout << word << endl;

  return 0;
}