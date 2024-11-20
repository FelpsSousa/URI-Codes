/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1023.
 * Date: 2024-11-20
 * Version: 2.0
 */

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

struct Property {
    int residents;
    int consumption;
};

void processCity(int cityNumber, vector<Property>& properties) {
    int totalResidents = 0;
    int totalConsumption = 0;

    map<int, int> groupedConsumption;

    for (const auto& property : properties) {
        totalResidents += property.residents;
        totalConsumption += property.consumption;

        int avgConsumption = property.consumption / property.residents;
        groupedConsumption[avgConsumption] += property.residents;
    }

    cout << "Cidade# " << cityNumber << ":\n";

    bool first = true;
    for (const auto& entry : groupedConsumption) {
        if (!first) cout << " ";
        cout << entry.second << "-" << entry.first;
        first = false;
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

        for (int i = 0; i < n; ++i) {
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
