/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1025.
 * Date: 2024-11-25
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, Q;
  int caseNumber = 1;

  while (true) {
    cin >> N >> Q;

    if (N == 0 && Q == 0) {
      break;
    }

    vector<int> marbles(N);
    for (int i = 0; i < N; i++) {
      cin >> marbles[i];
    }

    sort(marbles.begin(), marbles.end());

    cout << "CASE# " << caseNumber++ << ":" << endl;

    for (int i = 0; i < Q; i++) {
      int query;
      cin >> query;

      auto it = lower_bound(marbles.begin(), marbles.end(), query);

      if (it != marbles.end() && *it == query) {
        int position = distance(marbles.begin(), it) + 1;
        cout << query << " found at " << position << endl;
      } else {
        cout << query << " not found" << endl;
      }
    }
  }

  return 0;
}
