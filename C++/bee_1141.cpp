/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1141.
 * Date: 2024-11-19
 * Version: 1.0
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_substring(const string& s1, const string& s2) {
  return s2.find(s1) != string::npos;
}

int main() {
  while (true) {
    int N;
    cin >> N;
    if (N == 0) break;

    vector<string> strings(N);

    for (int i = 0; i < N; i++) {
      cin >> strings[i];
    }

    sort(strings.begin(), strings.end(), [](const string& a, const string& b) {
      return a.size() < b.size();
    });

    vector<int> dp(N, 1);

    int max_sequence = 1;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < i; j++) {
        if (is_substring(strings[j], strings[i])) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
      max_sequence = max(max_sequence, dp[i]);
    }

    cout << max_sequence << endl;
  }

  return 0;
}
