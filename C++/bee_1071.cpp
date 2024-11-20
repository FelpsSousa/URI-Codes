/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1071.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x, y, sum = 0;
  
  cin >> x >> y;

  if (x > y) {
    swap(x, y);
  }

  for (int i = x + 1; i < y; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}
