/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2753
 * Date: 2024-12-06
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  int asciiValue = 97;

  for (int i = 0; i < 26; i++) {
    cout << asciiValue << " e " << static_cast<char>(asciiValue) << endl;
    asciiValue++; 
  }

  return 0;
}
