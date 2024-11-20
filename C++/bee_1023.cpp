/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1023.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Property {
  int residents;
  int consumption;
};

void processCity(int cityNumber, vector<Property>& properties) {
  int totalResidents = 0;
  int totalConsumption = 0;

  vector<pair<int, int>> peopleConsumption;

  for (const auto& property : properties) {
    totalResidents += property.residents;
    totalConsumption += property.consumption;

    int avgConsumption = floor(property.consumption / property.residents);
    peopleConsumption.emplace_back(property.residents, avgConsumption);
  }

  sort(peopleConsumption.begin(), peopleConsumption.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }
    return a.second < b.second;
  });

  cout << "Cidade# " << cityNumber << ":\n";
  for (size_t i = 0; i < peopleConsumption.size(); i++) {
    if (i > 0) cout << " ";
    cout << peopleConsumption[i].first << "-" << peopleConsumption[i].second;
  }
  cout << "\n";

  double avgTotalConsumption = static_cast<double>(totalConsumption) / totalResidents;
  cout << fixed << setprecision(2) << "Consumo medio: " << avgTotalConsumption << " m3.\n";
}

int main() {
  int cityNumber = 1;

  while (true) {
    int n;
    cin >> n;

    if (n == 0) break;

    vector<Property> properties;

    for (int i = 0; i < n; i++) {
      int residents, consumption;
      cin >> residents >> consumption;
      properties.push_back({residents, consumption});
    }

    if (cityNumber > 1) cout << "\n";
    processCity(cityNumber, properties);
    cityNumber++;
  }  
  
  return 0;
}
