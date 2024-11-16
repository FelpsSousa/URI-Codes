/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YouTube: @thefelpscode
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  double sides[] = {A, B, C};
  sort(sides, sides + 3, greater<double>());
  A = sides[0]; 
  B = sides[1]; 
  C = sides[2];

  if (A >= B + C) {
    cout << "NAO FORMA TRIANGULO" << endl;
  } else {
    double A2 = pow(A, 2), B2 = pow(B, 2), C2 = pow(C, 2);

    if (A2 == B2 + C2) {
      cout << "TRIANGULO RETANGULO" << endl;
    } else if (A2 > B2 + C2) {
      cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (A2 < B2 + C2) {
      cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (A == B && B == C) {
      cout << "TRIANGULO EQUILATERO" << endl;
    } else if (A == B || A == C || B == C) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  return 0;
}