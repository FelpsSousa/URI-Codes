/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1114
 * Date: 2024-11-27
 * Version: 1.0
 */

#include <iostream>

using namespace std;

int main() {
  const int correctPassword = 2002;
  int inputPassword;

  while (true) {
    cin >> inputPassword;

    if (inputPassword == correctPassword) {
      cout << "Acesso Permitido" << endl;
      break;
    } else {
      cout << "Senha Invalida" << endl;
    }
  }

  return 0;
}
