/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2455.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int P1, C1, P2, C2;
  cin >> P1 >> C1 >> P2 >> C2;
  
  int leftMoment = P1 * C1;
  int rightMoment = P2 * C2;

  if (leftMoment == rightMoment) {
    cout << 0 << endl;
  } else if (leftMoment > rightMoment) {
    cout << -1 << endl;
  } else if (leftMoment < rightMoment) {
    cout << 1 << endl;
  }

  return 0;
}