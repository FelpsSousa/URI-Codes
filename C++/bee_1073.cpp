/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1073.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 2; i <= n; i+= 2) {
    cout << i << "^2 = " << i * i << endl;
  }

  return 0;
}
