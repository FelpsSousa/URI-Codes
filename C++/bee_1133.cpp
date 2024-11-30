/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1133
 * Date: 2024-11-30
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (x > y) {
    swap(x, y);
  }

  for (int i = x + 1; i < y; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      cout << i << endl;
    }
  }

  return 0;
}
