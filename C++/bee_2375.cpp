/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2375
 * Date: 2024-12-12
 * Version: 1.0
 */

#include <iostream>
using namespace std;

int main() {
  int N;
  int A, L, P;

  cin >> N;
  cin >> A >> L >> P;

  if (N <= A && N <= L && N <= P) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}

