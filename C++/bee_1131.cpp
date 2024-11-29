/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1131
 * Date: 2024-11-29
 * Version: 1.1
 */

#include <iostream>

using namespace std;

int main() {
  int interGoals, gremioGoals;
  int newGrenal;
  int interWins = 0, gremioWins = 0, draws = 0, totalMatches = 0;

  do {
    cin >> interGoals >> gremioGoals;

    if (interGoals > gremioGoals) {
      interWins++; 
    } else if (gremioGoals > interGoals) {
      gremioWins++;
    } else {
      draws++;
    }

    totalMatches++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> newGrenal;

  } while (newGrenal == 1);

  cout << totalMatches << " grenais" << endl;
  cout << "Inter:" << interWins << endl;
  cout << "Gremio:" << gremioWins << endl;
  cout << "Empates:" << draws << endl;

  if (interWins > gremioWins) {
    cout << "Inter venceu mais" << endl;
  } else if (gremioWins > interWins) {
    cout << "Gremio venceu mais" << endl;
  } else { 
    cout << "Nao houve vencedor" << endl;
  }

  return 0;
}
