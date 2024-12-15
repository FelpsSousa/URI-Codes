/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2879
 * Date: 2024-12-15
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int doorWithCar, winCount = 0;

  for (int i = 0; i < N; i++) {
    cin >> doorWithCar;

    if (doorWithCar != 1) {
      winCount++;
    }
  }

  cout << winCount << endl;

  return 0;
}
