/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1145
 * Date: 2025-01-03
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  for (int i = 1; i <= y; ++i) {
    cout << i;
    if (i % x == 0 || i == y) {
      cout << endl; 
    } else {
      cout << " ";
    }
  }

  return 0;
}
