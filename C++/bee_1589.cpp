/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1589.
 * Date: 2024-11-24
 * Version: 1.1
 */

#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    int R1, R2;
    cin >> R1 >> R2;

    int conduitRadius = R1 + R2;

    cout << conduitRadius << endl;
  }

  return 0;
}