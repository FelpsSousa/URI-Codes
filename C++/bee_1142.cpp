/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1142
 * Date: 2024-11-30
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int number = 1;

  for (int i = 0; i < n; i++) {
    cout << number << " " << number + 1 << " " << number + 2 << " " << "PUM" << endl;
    number += 4;
  }

  return 0;
}
