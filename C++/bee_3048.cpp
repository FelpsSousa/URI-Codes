/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 3048.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sequence(n);
  for (int i = 0; i < n; i++) {
    cin >> sequence[i];
  }

  int markedCount = 1;
  int previousMarked = sequence[0];

  for (int i = 0; i < n; i++) {
    if (sequence[i] != previousMarked) {
      markedCount++;
      previousMarked = sequence[i];
    }
  }

  cout << markedCount << endl;

  return 0;
}
