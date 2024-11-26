/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1096
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  for (int I = 1; I <= 9; I += 2) {
    for (int J = 7; J >= 5; --J) {
      cout << "I=" << I << " J=" << J << endl;
    }
  }

  return 0;
}
