/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1387
 * Date: 2024-12-18
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int L, R;

  while (true) {
      
    cin >> L >> R;

    if (L == 0 && R == 0) {
      break;
    }

    cout << (L + R) << endl;
  }

  return 0;
}
