/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Volume de uma esfera...

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double pi = 3.14159;
  double radius, volume;

  cin >> radius;

  volume = ((4.0 * pi * radius * radius * radius) / 3); // lembrando de utilizar valores flutuantes para as fómulas, pois C++, dentre outras linguagens consideram  a divisão entre dois inteiros, outro int.

  cout << "VOLUME = ";
  cout << fixed << setprecision(3);
  cout << volume << endl;
  
  return 0;
}
