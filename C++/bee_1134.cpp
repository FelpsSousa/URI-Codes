/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1134
 * Date: 2024-11-30
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int code;
  int alcoholCount = 0, gasolineCount = 0, dieselCount = 0;

  while (true) {
    cin >> code;

    if (code == 1) {
      alcoholCount++;
    } else if (code == 2) {
      gasolineCount++;
    } else if (code == 3) {
      dieselCount++;
    } else if (code == 4) {
      break;
    }
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcoholCount << endl;
  cout << "Gasolina: " << gasolineCount << endl;
  cout << "Diesel: " << dieselCount << endl;

  return 0;
}
