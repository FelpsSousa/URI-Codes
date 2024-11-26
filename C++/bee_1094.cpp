/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1094
 * Date: 2024-11-26
 * Version: 1.0
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  int total = 0;
  int totalRabbits = 0, totalRats = 0, totalFrogs = 0;

  for (int i = 0; i < N; i++) {
    int amount;
    char type;

    cin >> amount >> type;

    total += amount;

    if (type == 'C') {
      totalRabbits += amount;
    } else if (type == 'R') {
      totalRats += amount;
    } else if (type == 'S') {
      totalFrogs += amount;
    }
  }

  double percentRabbits = (totalRabbits * 100.00) / total;
  double percentRats = (totalRats * 100.00) / total;
  double percentFrogs = (totalFrogs * 100.00) / total;

  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << totalRabbits << endl;
  cout << "Total de ratos: " << totalRats << endl;
  cout << "Total de sapos: " << totalFrogs << endl;
  cout << fixed << setprecision(2);
  cout << "Percentual de coelhos: " << percentRabbits << " %" << endl;
  cout << "Percentual de ratos: " << percentRats << " %" << endl;
  cout << "Percentual de sapos: " << percentFrogs << " %" << endl;

  return 0;
}
