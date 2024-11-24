/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2936.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> portionSizes = {300, 1500, 600, 1000, 150};
  int mrsChicaPortion = 225;

  vector<int> position(5);
  for (int i = 0; i < 5; i++) {
    cin >> position[i];
  }

  int totalFood = mrsChicaPortion;
  for (int i = 0; i < 5; i++) {
    totalFood += portionSizes[i] * position[i];
  }

  cout << totalFood << endl;
  return 0;
}