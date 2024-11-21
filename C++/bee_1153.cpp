/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1153.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int factorial = 1;

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  cout << factorial << endl;

  return 0;
}
