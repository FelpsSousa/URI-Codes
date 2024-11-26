/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1098
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  for (double I = 0; I <= 2.01; I += 0.2) {
      for (double J = 1 + I; J <= 3 + I; J += 1) {
        cout << "I=" << (int(I) == I ? int(I) : I) << " J=" << (int(J) == J ? int(J) : J) << endl;
      }
    }

  return 0;
}
