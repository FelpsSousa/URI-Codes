/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1051.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double salary, tax = 0.0;
  cin >> salary;

  if (salary > 4500.00) {
    tax += (salary - 4500.00) * 0.28;
    salary = 4500.00;
  }
  if (salary > 3000.00) {
    tax += (salary - 3000.00) * 0.18;
    salary = 3000.00;
  }
  if (salary > 2000.00) {
    tax += (salary - 2000.00) * 0.08;
  }

  if (tax == 0.0) {
    cout << "Isento" << endl;
  } else {
    cout << fixed << setprecision(2);
    cout << "R$ " << tax << endl;
  }
  
  return 0;
}
