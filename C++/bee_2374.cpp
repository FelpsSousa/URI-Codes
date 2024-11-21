/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2374.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int desiredPressure, currentPressure;

  cin >> desiredPressure >> currentPressure;

  int difference = desiredPressure - currentPressure;

  cout << difference << endl;

  return 0;
}
