/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1046.
 * Date: 2024-11-17
 * Version: 1.0
 */


#include <iostream>

using namespace std;

int main() {
  int start, end;
  cin >> start >> end;

  int duration;

  if (start < end) {
    duration = end - start;
  } else if (start > end) {
    duration = (24 - start) + end;
  } else {
    duration = 24;
  }

  cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

  return 0;
}
