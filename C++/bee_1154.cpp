/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1154
 * Date: 2025-01-04
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int age;
  int sum = 0, count = 0;

  while (cin >> age) {
    if (age < 0) break;
    sum += age;
    count++;
  }

  if (count > 0) {
    double average = static_cast<double>(sum) / count;
    cout << fixed << setprecision(2) << average << endl;
  }

  return 0;
}
