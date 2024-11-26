/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1097
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int baseJ = 7;

  for (int I = 1; I <= 9; I += 2) {
    for (int J = baseJ; J >= baseJ - 2; --J) {
      cout << "I=" << I << " J=" << J << endl;
    }
    baseJ += 2;
  }

  return 0;
}
