/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2172.
 * Date: 2024-11-25
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int X;
  unsigned long long M;

  while (true) {
    cin >> X >> M;

    if (X == 0 && M == 0) break;

    unsigned long long E = X * M;

    cout << E << endl;
  }

  return 0;
}