/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1113
 * Date: 2024-11-27
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;

  while (true) {
    cin >> x >> y;

    if (x == y) {
      break;
    }

    if (x > y) {
      cout << "Decrescente" << endl;
    } else {
      cout << "Crescente" << endl;
    }
  }

  return 0;
}
