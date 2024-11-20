/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2006.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;

  vector<int> responses(5);
  for (int i = 0; i < 5; i++) {
    cin >> responses[i];
  }

  int correct_count = 0;

  for (int i = 0; i < 5; i++) {
    if (responses[i] == T) {
      correct_count++;
    }
  }

  cout << correct_count << endl;

  return 0;
}
