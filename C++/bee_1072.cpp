/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1072.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int n, x;
  int inCount = 0, outCount = 0;
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x >= 10 && x <= 20) {
      inCount++;
    } else {
      outCount++;
    }
  }

  cout << inCount << " in" << endl;
  cout << outCount << " out" << endl;

  return 0;
}
