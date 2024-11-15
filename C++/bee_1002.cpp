/*  The Felps Code
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode     
*/ 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double n = 3.14159;
  double raio, area;

  cin >> raio;

  area = (raio * raio) * n;

  cout << "A="; 
  cout << fixed << setprecision(4); 
  cout << area;
  cout << endl;
  
  return 0;
}