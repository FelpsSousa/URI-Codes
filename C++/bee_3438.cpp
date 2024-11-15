#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int F, P, E, A;

    while (true) {
        cin >> F >> P >> E >> A;

        if (F == 0 && P == 0 && E == 0 && A == 0) {
            break;
        }

        vector<vector<int>> programs(P, vector<int>(F));
        vector<vector<long long>> dp(P, vector<long long>(F, LLONG_MAX));

        for (int i = 0; i < P; i++) {
            for (int j = 0; j < F; j++) {
                cin >> programs[i][j];
            }
        }

        for (int i = 0; i < F; i++) {
            dp[0][i] = programs[0][i];
        }

        for (int i = 1; i < P; i++) {
            for (int j = 0; j < F; j++) {
                for (int k = 0; k < F; k++) {
                    int energy = programs[i][j] * abs(j - k);
                    int time = (j != k) ? A : 0;

                    if (dp[i - 1][k] != LLONG_MAX) {
                        dp[i][j] = min(dp[i][j], dp[i - 1][k] + energy + time);
                    }
                }
            }
        }

        long long minEDP = LLONG_MAX;

        for (int i = 0; i < F; i++) {
            minEDP = min(minEDP, dp[P - 1][i]);
        }

        cout << minEDP << endl;
    }

    return 0;
}
