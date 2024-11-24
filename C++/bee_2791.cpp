/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2791.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int C1, C2, C3, C4;

  cin >> C1 >> C2 >> C3 >> C4;
  
  if (C1 == 1) {
    cout << 1 << endl;
  } else if (C2 == 1) {
    cout << 2 << endl;
  } else if (C3 == 1) {
    cout << 3 << endl;
  } else if (C4 == 1) {
    cout << 4 << endl;
  }

  return 0;
}