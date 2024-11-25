/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 3073
 * Date: 2024-11-25
 * Version: 1.1
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Vector {
  vector<int> coordinates;
  int weight;
};

int calculateRank(vector<vector<int>> matrix) {
  if (matrix.empty()) {
      return 0;
  }

  int rows = matrix.size();
  int cols = matrix[0].size();
  int rank = 0;

  for (int col = 0; col < cols; col++) {
    int pivot = rank;

    while (pivot < rows && matrix[pivot][col] == 0) {
        pivot++;
    }

    if (pivot < rows) {
      swap(matrix[rank], matrix[pivot]);

      for (int row = 0; row < rows; row++) {
        if (row != rank && matrix[row][col] != 0) {
          int factor = matrix[row][col];
          for (int c = col; c < cols; c++) {
            matrix[row][c] -= factor * matrix[rank][c];
          }
        }
      }
      rank++;
    }
  }

  return rank;
}

int solveMaxWeightIndependentVectors(vector<Vector>& vectors) {
  sort(vectors.begin(), vectors.end(), [](const Vector& a, const Vector& b) {
      return a.weight > b.weight;
  });

  vector<vector<int>> selectedVectors;
  int totalWeight = 0;

  for (const auto& vec : vectors) {
    vector<vector<int>> tempVectors = selectedVectors;
    tempVectors.push_back(vec.coordinates);

    int rankTemp = calculateRank(tempVectors);
    int rankSelected = calculateRank(selectedVectors);

    if (rankTemp > rankSelected) {
      selectedVectors.push_back(vec.coordinates);
      totalWeight += vec.weight;
    }
  }

  return totalWeight;
}

int main() {
  int d, N;
  cin >> d >> N;

  vector<Vector> vectors(N);

  for (int i = 0; i < N; ++i) {
    vectors[i].coordinates.resize(d);
    for (int j = 0; j < d; ++j) {
      cin >> vectors[i].coordinates[j];
    }
    cin >> vectors[i].weight;
  }

  int result = solveMaxWeightIndependentVectors(vectors);

  cout << result << endl;

  return 0;
}
