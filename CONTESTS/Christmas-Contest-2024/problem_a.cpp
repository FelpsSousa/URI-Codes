/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: 2024 CHRISTMAS CONTEST - PROBLEM A
 * Date: 2024-12-30
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

pair<vector<string>, int> calculateMissingLayersAndStars(const vector<int>& layers) {
    int minStars = *min_element(layers.begin(), layers.end());
    int maxStars = *max_element(layers.begin(), layers.end());

    vector<string> missingLayers;
    int totalMissingStars = 0;

    for (int stars = minStars + 2; stars < maxStars; stars += 2) {
      if (find(layers.begin(), layers.end(), stars) == layers.end()) {
        missingLayers.push_back(string(stars, '*'));
        totalMissingStars += stars;
      }
    }

    return {missingLayers, totalMissingStars};
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    vector<int> layers;

    for (int i = 0; i < N; ++i) {
      string layer;
      getline(cin, layer);
      layers.push_back(layer.size());
    }

    auto [missingLayers, totalStars] = calculateMissingLayersAndStars(layers);

    for (const string& layer : missingLayers) {
      cout << layer << endl;
    }

    cout << totalStars << endl;

    return 0;
}
