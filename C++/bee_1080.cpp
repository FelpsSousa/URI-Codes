/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1080.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int maxValue = 0, maxPosition = 0, current;

  for (int i = 1; i <= 100; i++) {
    cin >> current;
    if (current > maxValue) {
      maxValue = current;
      maxPosition = i;
    }  
  }

  cout << maxValue << endl;
  cout << maxPosition << endl;

  return 0;
}
