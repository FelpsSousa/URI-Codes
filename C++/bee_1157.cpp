/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1157.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;
  
  for (int i = 1; i <= N; i++) {
    if (N % i == 0) {
      cout << i << endl;
    }
  }

  return 0;
}