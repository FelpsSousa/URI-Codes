/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1067.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;

  if (x < 1 || x > 1000) {
    return 1;
  }

  for (int i = 1; i <= x; i += 2) {
    cout << i << endl;
  }

  return 0;
}