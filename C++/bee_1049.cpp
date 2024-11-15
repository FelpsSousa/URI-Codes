/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

//  ANIMAL - INICIANTE - NIVEL 3 | +3.7 PONTOS.

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string palavra1, palavra2, palavra3;

  cin >> palavra1 >> palavra2 >> palavra3;

  if (palavra1 == "vertebrado")
  {
    if (palavra2 == "ave")
    {
      if (palavra3 == "carnivoro")
      {
        cout << "aguia" << endl;
      }
      else if (palavra3 == "onivoro")
      {
        cout << "pomba" << endl;
      }
    }
    else if (palavra2 == "mamifero")
    {
      if (palavra3 == "onivoro")
      {
        cout << "homem" << endl; 
      }
      else if (palavra3 == "herbivoro")
      {
        cout << "vaca" << endl;
      }
    }
  }
  else if (palavra1 == "invertebrado")
  {
    if (palavra2 == "inseto")
    {
      if (palavra3 == "hematofago")
      {
        cout << "pulga" << endl;
      }
      else if (palavra3 == "herbivoro")
      {
        cout << "lagarta" << endl;
      }
    }
    else if (palavra2 == "anelideo")
    {
      if (palavra3 == "hematofago")
      {
        cout << "sanguessuga" << endl; 
      }
      else if (palavra3 == "onivoro")
      {
        cout << "minhoca" << endl;
      }
    }
  } 

  return 0;
}
