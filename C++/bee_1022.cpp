/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YouTube: @thefelpscode
*/

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

void simplify(int &numerator, int &denominator) {
  int divisor = gcd(abs(numerator), abs(denominator));
  numerator /= divisor;
  denominator /= divisor;

  if (denominator < 0) {
    numerator = -numerator;
    denominator = -denominator;
  }
}

int main() {
  int N;
  cin >> N;
  cin.ignore();

  while (N--) {
    int N1, D1, N2, D2;
    char op, slash1, slash2;

    cin >> N1 >> slash1 >> D1 >> op >> N2 >> slash2 >> D2;
    
    int resultNumerator, resultDenominator;

    if (op == '+') {
      resultNumerator = N1 * D2 + N2 * D1;
      resultDenominator = D1 * D2;
    } else if (op == '-') {
      resultNumerator = N1 * D2 - N2 * D1;
      resultDenominator = D1 * D2;
    } else if (op == '*') {
      resultNumerator = N1 * N2;
      resultDenominator = D1 * D2;
    } else if (op == '/') {
      resultNumerator = N1 * D2;
      resultDenominator = N2 * D1;
    }

    cout << resultNumerator << "/" << resultDenominator;

    int simplifiedNumerator = resultNumerator;
    int simplifiedDenominator = resultDenominator;
    simplify(simplifiedNumerator, simplifiedDenominator);

    cout << " = " << simplifiedNumerator << "/" << simplifiedDenominator << endl;
  }

  return 0;
}