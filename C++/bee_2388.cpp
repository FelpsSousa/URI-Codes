/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2388.
 * Date: 2024-11-21
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int totalDistance = 0;

  for (int i = 1; i <= n; i++) {
    int time, velocity;
    cin >> time >> velocity;

    totalDistance += time * velocity; 
  }

  cout << totalDistance << endl;

  return 0;
}
