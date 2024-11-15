/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

// Formula de Bhaskara

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double A, B, C;

  cin >> A >> B >> C;

  double delta = ( B * B ) - ( 4 * A * C ); 

  if ( A == 0 || delta < 0 ) { 
    
    cout << "Impossivel calcular" << endl; 
  } else {
    
    double raiz1 = ( ( -B + sqrt(delta)) / ( 2 * A ) );
    double raiz2 = ( ( -B - sqrt(delta)) / ( 2 * A ) );
  
    cout << "R1 = " << fixed << setprecision(5) << raiz1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << raiz2 << endl; 
  }

  return 0;
}