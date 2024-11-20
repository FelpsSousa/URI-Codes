/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1168.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> leds_per_digit = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  int N;
  cin >> N;

  while(N--) {
    string number;
    cin >> number;

    int total_leds = 0;

    for (char digit : number) {
      total_leds += leds_per_digit[digit - '0'];
    }

    cout << total_leds << " leds" << endl;
  }

  return 0;
}
