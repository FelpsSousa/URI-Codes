#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solve_case(int F, int P, int E, int A, vector<vector<pair<int, int>>>& programs) {
    vector<vector<int>> dp(P + 1, vector<int>(F + 1, INT_MAX));
    dp[0][1] = 0;

    for (int p = 1; p <= P; p++) {
        for (int f = 1; f <= F; f++) {
            int energy = programs[p][f].first;
            int time = programs[p][f].second;

            dp[p][f] = min(dp[p][f], dp[p - 1][f] + energy);

            for (int prev_f = 1; prev_f <= F; prev_f++) {
                if (prev_f == f) {
                    continue;
                }

                int change_energy = abs(f - prev_f) * E;
                int change_time = abs(f - prev_f) * A;

                dp[p][f] = min(dp[p][f], dp[p - 1][prev_f] + energy + change_energy + change_time);
            }
        }
    }

    int min_EDP = *min_element(dp[P].begin(), dp[P].end());
    return min_EDP;
}

int main() {
    while (true) {
        int F, P, E, A;
        cin >> F >> P >> E >> A;

        if (F == 0 && P == 0 && E == 0 && A == 0) {
            break;
        }

        vector<vector<pair<int, int>>> programs(P + 1, vector<pair<int, int>>(F + 1));

        for (int p = 1; p <= P; p++) {
            for (int f = 1; f <= F; f++) {
                int energy, time;
                cin >> energy >> time;
                programs[p][f] = make_pair(energy, time);
            }
        }

        int result = solve_case(F, P, E, A, programs);
        cout << result << endl;
    }

    return 0;
}
