/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2414
 * Date: 2024-12-01
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int num;
  int maxNumber = 0;

  while (true) {
    cin >> num;
    if (num == 0) break;
    if (num > maxNumber) maxNumber = num;
  }

  cout << maxNumber << endl;
  
  return 0;
}
