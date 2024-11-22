/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2344.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int grade;

  cin >> grade;

  if (grade == 0) {
    cout << "E" << endl;
  } else if (grade >= 1 && grade <= 35) {
    cout << "D" << endl;
  } else if (grade >= 36 && grade <= 60) {
    cout << "C" << endl;
  } else if (grade >= 61 && grade <= 85) {
    cout << "B" << endl;
  } else if (grade >= 86 && grade <= 100) {
    cout << "A" << endl;
  }

  return 0;
}
