/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1985.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int p;
  cin >> p;

  double total = 0.0;

  double prices[1006] = {0};
  prices[1001] = 1.50;
  prices[1002] = 2.50;
  prices[1003] = 3.50;
  prices[1004] = 4.50;
  prices[1005] = 5.50;

  for (int i = 0; i < p; i++) {
    int product, quantity;
    cin >> product >> quantity;
    total += prices[product] * quantity;
  }

  cout << fixed << setprecision(2) << total << endl;

  return 0;
}