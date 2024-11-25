/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2434.
 * Date: 2024-11-25
 * Version: 1.0
 */

#include <iostream>
#include <climits>

using namespace std;

int main() {
  int N, S;
  cin >> N >> S;

  int currentBalance = S;
  int lessBalance = S;

  for (int i = 0; i < N; i++) {
    int movement;
    cin >> movement;

    currentBalance += movement;

    if (currentBalance < lessBalance) {
      lessBalance = currentBalance;
    }
  }

  cout << lessBalance << endl;

  return 0;
}