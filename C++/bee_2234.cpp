/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2234
 * Date: 2024-12-02
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int h, p;
  cin >> h >> p;

  double average = static_cast<double>(h) / p;

  cout << fixed << setprecision(2) << average << endl; 
  
  return 0;
}
