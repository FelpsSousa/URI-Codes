/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1099
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int sumOddNumbers(int x, int y) {
  int sum = 0;

  if (x > y) {
    swap(x, y);
  }

  for (int i = x + 1; i < y; ++i) {
    if (i % 2 != 0) {
      sum += i;
    }
  }

  return sum;
}

int main() {
  int N;
  cin >> N;

  while (N--) {
    int x, y;
    cin >> x >> y;
    cout << sumOddNumbers(x, y) << endl;
  }

  return 0;
}
