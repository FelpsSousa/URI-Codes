/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1070.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;

  if (x % 2 == 0) {
    x++;
  }

  for (int i = 0; i < 6; i++) {
    cout << x << endl;
    x += 2;
  }

  return 0;
}