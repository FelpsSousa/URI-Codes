/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1865
 * Date: 2024-12-03
 * Version: 1.0
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  int c;
  cin >> c;

  while (c--) {
    string name;
    int force;
    
    cin >> name >> force;

    if (name == "Thor") {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
  }

    return 0;
}
