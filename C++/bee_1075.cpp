/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1075.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 1; i < 10000; i++) {
    if (i % n == 2) {
      cout << i << endl;
    }
  }

  return 0;
}
