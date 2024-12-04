/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1866
 * Date: 2024-12-04
 * Version: 1.1
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  int c;
  cin >> c;

  while (c--) {
    int n;
    cin >> n;

    int result = (n % 2 == 0) ? 0 : 1;

    cout << result << endl;
  }

  return 0;
}
