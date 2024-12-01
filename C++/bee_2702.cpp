/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2702
 * Date: 2024-12-01
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int Ca, Ba, Pa;
  int Cr, Br, Pr;

  cin >> Ca >> Ba >> Pa >> Cr >> Br >> Pr;

  int unmetChicken = max(0, Cr - Ca);
  int unmetBeef = max(0, Br - Ba);
  int unmetPasta = max(0, Pr - Pa);

  int totalUnmet = unmetChicken + unmetBeef + unmetPasta;

  cout << totalUnmet << endl;
  
  return 0;
}
