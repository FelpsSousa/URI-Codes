#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<char> findMoneyLosers(int N, const vector<int>& X, const vector<int>& Y) {
    vector<vector<int>> graph(N + 1);
    vector<int> inDegree(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        graph[X[i]].push_back(i);
        graph[Y[i]].push_back(i);
        inDegree[X[i]]++;
        inDegree[Y[i]]++;
    }

    vector<char> moneyLosers(N + 1, 'N');
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
            moneyLosers[i] = 'Y';
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
                moneyLosers[v] = 'Y';
            }
        }
    }

    return moneyLosers;
}

int main() {
    int N;
    cin >> N;

    vector<int> X(N + 1), Y(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    vector<char> moneyLosers = findMoneyLosers(N, X, Y);

    for (int i = 1; i <= N; i++) {
        cout << moneyLosers[i];
    }
    cout << endl;

    return 0;
}
