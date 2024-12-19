/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2780
 * Date: 2024-12-19
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int D;

  cin >> D;

  if (D <= 800) {
    cout << 1 << endl;
  } else if (D <= 1400) {
    cout << 2 << endl;
  } else if (D <= 2000) {
    cout << 3 << endl;
  }

  return 0;
}

