/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2235
 * Date: 2025-01-01
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canReturnToPresent(int a, int b, int c) {
  vector<int> credits = {a, b, c};

  for (int i = 0; i < 3; ++i) {
    if (credits[i] == 0) return true;

    for (int j = i + 1; j < 3; ++j) {
      if (credits[i] - credits[j] == 0 || credits[i] + credits[j] == 0) return true;

      for (int k = j + 1; k < 3; ++k) {
        if (credits[i] - credits[j] + credits[k] == 0 || 
          credits[i] - credits[j] - credits[k] == 0 ||
          credits[i] + credits[j] - credits[k] == 0 ||
          credits[i] + credits[j] + credits[k] == 0) return true;
      }
    }
  }
  return false;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (canReturnToPresent(a, b, c)) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}
