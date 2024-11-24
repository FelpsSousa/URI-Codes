/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2756.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>
#include <string>

using namespace std;

void printRow(int spaces, char letter, int innerSpaces) {
  for (int i = 0; i < spaces; i++) {
    cout << " ";
  }
  cout << letter;

  if (innerSpaces > 0) {
    for (int i = 0; i < innerSpaces; i++) {
      cout << " ";
    }
    cout << letter;
  }

  cout << endl;
}

int main() {
  printRow(7, 'A', 0);
  printRow(6, 'B', 1);
  printRow(5, 'C', 3);
  printRow(4, 'D', 5);
  printRow(3, 'E', 7);

  printRow(4, 'D', 5);
  printRow(5, 'C', 3);
  printRow(6, 'B', 1);
  printRow(7, 'A', 0);

  return 0;
}