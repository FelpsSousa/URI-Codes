/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1117
 * Date: 2024-11-28
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double grade1 = -1, grade2 = -1, input = 0;

  while (true) {
    cin >> input;

    if (input >= 0.0 && input <= 10.0) {
      if (grade1 == -1) {
        grade1 = input;
      } else if (grade2 == -1) {
        grade2 = input;
        break;
      }
    } else {
      cout << "nota invalida" << endl;
    }
  }

  double average = (grade1 + grade2) / 2.0;
  cout << fixed << setprecision(2) << "media = " << average << endl;

  return 0;
}
