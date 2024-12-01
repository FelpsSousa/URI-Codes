/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1930
 * Date: 2024-12-01
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int t1, t2, t3, t4;
  cin >> t1 >> t2 >> t3 >> t4;

  int maxDevices = (t1 + t2 + t3 + t4) - 3;

  cout << maxDevices << endl;

  return 0;
}
