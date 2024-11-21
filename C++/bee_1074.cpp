/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1074.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int n, x;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x == 0) {
      cout << "NULL" << endl;
    } else {
      if (x % 2 == 0) {
        cout << "EVEN";
      } else {
        cout << "ODD";
      }
    
      if (x > 0) {
        cout << " POSITIVE" << endl;
      } else {
        cout << " NEGATIVE" << endl;
      }
    }
  }

  return 0;
}
