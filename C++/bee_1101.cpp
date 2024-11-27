/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1101
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  while (true) {
    int M, N;
    cin >> M >> N;

    if (M <= 0 || N <= 0) {
      break;
    }

    if (M > N) {
      swap(M, N);
    }

    int sum = 0;
    for (int i = M; i <= N; ++i) {
      cout << i << " ";
      sum += i;
    }

    cout << "Sum=" << sum << endl;
  }

  return 0;
}
