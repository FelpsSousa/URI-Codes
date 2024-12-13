/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1546
 * Date: 2024-12-13
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> responsibles = {"Rolien", "Naej", "Elehcim", "Odranoel"};

  while (N--) {
    int K;
    cin >> K;

    for (int i = 0; i < K; i++) {
      int category;
      cin >> category;

      cout << responsibles[category - 1] << endl;
    }
  }

  return 0;
}
