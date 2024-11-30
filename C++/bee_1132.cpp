/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1132
 * Date: 2024-11-30
 * Version: 1.1
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;
  int sum = 0;

  cin >> x >> y;

  if (x > y) {
    swap(x, y);
  }

  for (int i = x; i <= y; i++) {
    if (i % 13 != 0) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}
