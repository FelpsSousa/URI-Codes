/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1052.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <array>

using namespace std;

int main() {
  array<string, 12> months = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
  };

  int monthNumber;
  cin >> monthNumber;

  if (monthNumber < 1 || monthNumber > 12) {
    return 0;
  } else {
    cout << months[monthNumber - 1] << endl;
  }

  return 0;
}