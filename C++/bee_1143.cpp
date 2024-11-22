/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1143.
 * Date: 2024-11-22
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
   int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << i << " " << i * i << " " << i * i * i << endl;
  }

  return 0;
}
