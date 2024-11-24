/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2416.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int C, N;
  
  cin >> C >> N;

  int endPoint = C % N;

  cout << endPoint << endl;

  return 0;
}