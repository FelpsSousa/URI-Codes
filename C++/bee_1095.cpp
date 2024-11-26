/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1095
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int I = 1;
  int J = 60;

  while (J >= 0) {
    cout << "I=" << I << " J=" << J << endl;
    J -= 5;
    I += 3;
  }

  return 0;
}
