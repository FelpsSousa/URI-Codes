/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2146
 * Date: 2025-01-02
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int calculatePassword(int n) {
  return n - 1;
}

int main() {
  int n;

  while (cin >> n) {
    if (n >= 1001 && n <= 9999) {
      cout << calculatePassword(n) << endl;
    }
  }

  return 0;
}
