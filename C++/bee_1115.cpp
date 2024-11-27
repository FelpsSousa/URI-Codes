/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1115
 * Date: 2024-11-27
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;

  while (true) {
    cin >> x >> y;

    if (x == 0 || y == 0) {
      break;
    } 
    
    if (x > 0 && y > 0) {
      cout << "primeiro" << endl;
    } else if (x < 0 && y > 0) {
      cout << "segundo" << endl;
    } else if (x < 0 && y < 0) {
      cout << "terceiro" << endl;
    } else if (x > 0 && y < 0) {
      cout << "quarto" << endl;
    }
  }

  return 0;
}
