#include <iostream>
#include <string>
using namespace std;

string findFolds(int N, int P, int H) {
    string folds(N, ' ');

    int left = 1, right = (1 << N);
    for (int i = N - 1; i >= 0; i--) {
        int mid = (left + right) / 2;
        if (P <= mid) {
            folds[i] = 'L';
            right = mid;
        } else {
            folds[i] = 'R';
            left = mid + 1;
        }
    }

    int layers = 1 << (N - H);
    if (folds[N - 1] == 'L') {
        layers += (1 << N);
    }

    if (layers > (1 << N)) {
        for (int i = 0; i < N; i++) {
            if (folds[i] == 'L') {
                folds[i] = 'R';
            } else {
                folds[i] = 'L';
            }
        }
        layers = (1 << (N + 1)) - layers;
    }

    while (layers != (1 << H)) {
        int idx = -1;
        for (int i = 0; i < N; i++) {
            if (folds[i] == 'L' && (layers & (1 << i)) == 0) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            for (int i = 0; i < N; i++) {
                if (folds[i] == 'R' && (layers & (1 << i)) == 0) {
                    idx = i;
                    break;
                }
            }
        }
        if (idx == -1) {
            break;
        }
        layers ^= (1 << idx);
        if (folds[idx] == 'L') {
            folds[idx] = 'R';
        } else {
            folds[idx] = 'L';
        }
    }

    return folds;
}

int main() {
    int N, P, H;
    cin >> N >> P >> H;

    string folds = findFolds(N, P, H);
    cout << folds << endl;

    return 0;
}
