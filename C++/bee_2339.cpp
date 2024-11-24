/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2339.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int C, P, F;
  
  cin >> C >> P >> F;

  if (C * F <= P) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}