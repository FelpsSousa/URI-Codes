/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1048.
 * Date: 2024-11-17
 * Version: 1.0
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double salary, new_salary, adjustment;
  int percentage;

  cin >> salary;

  if (salary <= 400.00) {
    percentage = 15;
  } else if (salary <= 800.00) {
    percentage = 12;
  } else if (salary <= 1200.00) {
    percentage = 10;
  } else if (salary <= 2000.00) {
    percentage = 7;
  } else {
    percentage = 4;
  }

  adjustment = salary * (percentage / 100.0);
  new_salary = salary + adjustment;

  cout << fixed << setprecision(2);
  cout << "Novo salario: " << new_salary << endl;
  cout << "Reajuste ganho: " << adjustment << endl;
  cout << "Em percentual: " << percentage << " %" << endl;

  return 0;
}
