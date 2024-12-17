/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1555
 * Date: 2024-12-17
 * Version: 1.0
 */

#include <iostream>
#include <cmath>

using namespace std;

int rafael(int x, int y) {
  return pow(3 * x, 2) + pow(y, 2);
}

int beto(int x, int y) {
  return 2 * pow(x, 2) + pow(5 * y, 2);
}

int carlos(int x, int y) {
  return -100 * x + pow(y, 3);
}

int main() {
  int N;
  cin >> N;

  while (N--) {
    int x, y;
    cin >> x >> y;

    int rafaelResult = rafael(x, y);
    int betoResult = beto(x, y);
    int carlosResult = carlos(x, y);

    if (rafaelResult > betoResult && rafaelResult > carlosResult) {
      cout << "Rafael ganhou" << endl;
    } else if (betoResult > rafaelResult && betoResult > carlosResult) {
      cout << "Beto ganhou" << endl;
    } else {
      cout << "Carlos ganhou" << endl;
    }
  }

  return 0;
}
