/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1120.
 * Date: 2024-11-18
 * Version: 1.0
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
  while (true) {
    char defective_digit;
    string number;

    cin >> defective_digit >> number;

    if (defective_digit == '0' && number == "0") {
      break;
    }


    string result = "";
    for (char digit : number) {
      if (digit != defective_digit) {
        result += digit;
      }
    }

    if (result.empty()) {
      cout << "0" << endl;
    } else {
      size_t non_zero_pos = result.find_first_not_of('0');
      
      if (non_zero_pos != string::npos) {
        cout << result.substr(non_zero_pos) << endl;
      } else {
        cout << "0" << endl;
      }
    }
  }

  return 0;
}
