/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2061.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int N, M;
  
  cin >> N >> M;

  string action;
  for (int i = 0; i < M; i++) {
    cin >> action;
    if (action == "fechou") {
      N += 1;
    } else if (action == "clicou") {
      N -= 1;
    }
  }

  cout << N << endl;

  return 0;
}