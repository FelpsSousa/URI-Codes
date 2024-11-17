/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1050.
 * Date: 2024-11-17
 * Version: 1.0
 */


#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<int, string> ddd_map = {
    {61, "Brasilia"},
    {71, "Salvador"},
    {11, "Sao Paulo"},
    {21, "Rio de Janeiro"},
    {32, "Juiz de Fora"},
    {19, "Campinas"},
    {27, "Vitoria"},
    {31, "Belo Horizonte"},
  };

  int ddd;
  cin >> ddd;

  if (ddd_map.find(ddd) != ddd_map.end()) {
    cout << ddd_map[ddd] << endl;
  } else {
    cout << "DDD nao cadastrado" << endl;
  }

  return 0;
}
