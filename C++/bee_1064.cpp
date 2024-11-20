/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1064.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double number, sum = 0.0;
  int positiveCount = 0;

  for (int i = 0; i < 6; i++) {
    cin >> number;
    if (number > 0) {
      positiveCount++;
      sum += number;
    }
  }

  double average = sum / positiveCount;

  cout << positiveCount << " valores positivos" << endl;
  cout << fixed << setprecision(1) << average << endl;
 
  return 0;
}