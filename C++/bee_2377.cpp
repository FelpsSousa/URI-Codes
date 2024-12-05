/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2377
 * Date: 2024-12-05
 * Version: 1.0
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  int L, D;
  int K, P;

  cin >> L >> D;
  cin >> K >> P;

  int tollCount = (L / D);
  int cost = (L * K) + (tollCount * P);

  cout << cost << endl;

  return 0;
}
